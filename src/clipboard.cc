#include "stdafx.h"
#include "ed.h"
#include "clipboard.h"

Clipboard::Clipboard ()
       : AddClipboardFormatListenerProc (nullptr),
         RemoveClipboardFormatListenerProc (nullptr)
{
  HMODULE user32 = GetModuleHandle ("user32");
  if (!user32)
    user32 = LoadLibrary ("user32");
  if (!user32)
    return;

  AddClipboardFormatListenerProc =
    (AddClipboardFormatListener) GetProcAddress (user32, "AddClipboardFormatListener");
  RemoveClipboardFormatListenerProc =
    (RemoveClipboardFormatListener) GetProcAddress (user32, "RemoveClipboardFormatListener");
  use_newapi_p = (AddClipboardFormatListenerProc != nullptr && RemoveClipboardFormatListenerProc != nullptr);
}


void
Clipboard::add_clipboard_chain (HWND hwnd)
{
  hwnd_next_clipboard = SetClipboardViewer (hwnd);
  last_clipboard_seqno = GetClipboardSequenceNumber ();
}

void
Clipboard::remove_clipboard_chain (HWND hwnd)
{
  ChangeClipboardChain (hwnd, hwnd_next_clipboard);
  hwnd_next_clipboard = 0;
  last_clipboard_seqno = 0;
}


void
Clipboard::add_listener (HWND hwnd)
{
  if (use_newapi_p)
    AddClipboardFormatListenerProc (hwnd);
  else
    add_clipboard_chain (hwnd);
}

void
Clipboard::remove_listener (HWND hwnd)
{
  if (use_newapi_p)
    RemoveClipboardFormatListenerProc (hwnd);
  else
    remove_clipboard_chain (hwnd);
}

void
Clipboard::repair_clipboard_chain_if_need (HWND hwnd)
{
  if (use_newapi_p) return;
  if (last_clipboard_seqno == GetClipboardSequenceNumber ()) return;

  remove_clipboard_chain (hwnd);
  add_clipboard_chain (hwnd);
}

void
Clipboard::draw_clipboard (HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
  if (hwnd_next_clipboard)
    SendMessage (hwnd_next_clipboard, msg, wparam, lparam);
  clipboard_update (hwnd, msg, wparam, lparam);
}

void
Clipboard::change_clipboard_chain (HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
  if (HWND (wparam) == hwnd_next_clipboard)
    hwnd_next_clipboard = HWND (lparam);
  else if (hwnd_next_clipboard)
    SendMessage (hwnd_next_clipboard, msg, wparam, lparam);
}

void
Clipboard::clipboard_update (HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
  if (last_clipboard_seqno == GetClipboardSequenceNumber ())
    return;
  last_clipboard_seqno = GetClipboardSequenceNumber ();
  xsymbol_value (Vclipboard_newer_than_kill_ring_p) = Qt;
  xsymbol_value (Vkill_ring_newer_than_clipboard_p) = Qnil;
  if (selected_window ())
    selected_buffer ()->safe_run_hook (Vchange_clipboard_hook, 0);
}
