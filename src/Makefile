CFLAGS = -D __XYZZY__ -D PRIVCTRL_NODLL -I privctrl -I gen -fpermissive -finput-charset=cp932 -fexec-charset=cp932
GEN_DIR = gen
depend = $1: $(addprefix $(GEN_DIR)/, $2)

all: $(GEN_DIR) ../xyzzy.exe
../xyzzy.exe: Buffer.o ChooseFont.o ColorDialog.o DnD.o StrBuf.o Window.o\
     alloc.o appid.o arc-if.o archiver.o array.o assert.o backq.o bignum.o\
     binfo.o buffer-bar.o byte-stream.o bytecode.o ces.o char.o chname.o\
     chunk.o clipboard.o colors.o com.o conf.o ctl3d.o data.o dde.o debug.o\
     dialogs.o disp.o dll.o doc.o dockbar.o edict.o encdec.o encoding.o\
     environ.o eval.o except.o fileio.o filer.o fnkey.o font.o gime.o glob.o\
     guess.o guid.o gzip.o hash.o hashpjw.o init.o insdel.o ipc.o kanji.o kbd.o\
     keymap.o ldialog.o lex.o list.o listen.o lprint.o lread.o md5c.o menu.o\
     minibuf.o mman.o monitor.o mouse.o move.o msgbox.o number.o oledata.o\
     package.o pane.o pathname.o popup.o popupl.o pred.o preview.o print.o\
     printdlg.o process.o random.o regex.o resolver.o search.o sequence.o\
     sha1.o sha2.o signal.o sock.o sockinet.o sockssl.o statarea.o stdafx.o\
     stdctl.o stream.o string.o structure.o symbol.o symtable.o syntax.o\
     sysdep.o system.o thread.o toplev.o ucs2.o undo.o usertab.o usertool.o\
     utils.o utimer.o vector.o version.o vfs.o wheel.o winhelp.o wstream.o\
     xdde.o xlist.o xpi.o $(GEN_DIR)/chtab.o $(GEN_DIR)/msgdef.o\
     $(GEN_DIR)/dumpver.o dsfmt/dSFMT.o privctrl/privctrl.o privctrl/url.o\
     privctrl/listviewex.o
	$(CXX) $(CFLAGS) -Lzlib -o $@ $^ -static-libgcc -static-libstdc++ -loleaut32 -lole32 -lcomdlg32 -lcomctl32 -luuid -lgdi32 -limm32 -lz -lmpr -lwinspool -lsecur32 -lcrypt32 -lrpcrt4

$(call depend, gen-msg.exe, chtab.cc)
$(call depend, Buffer.o, msgcode.h vars-decl.h fns-decl.h)
$(call depend, disp.o, jisx0212-hash.h)
$(call depend, encoding.o, ibmext.h utf2sjis.h)
$(call depend, kanji.o, iso2022state.h kanjitab.h)
$(call depend, number.o, num-arith.h)
$(call depend, symtable.o, symtable.cc)
$(call depend, ucs2.o, char-width.h)
$(call depend, version.o, version-describe.h)

ALLOC_H=alloc.h cdecl.h
ARC_IF_H=arc-if.h comm-arc.h
BINFO_H=binfo.h version.h
DOCKBAR_H=dockbar.h xlist.h
CHTYPE_H=chtype.h cdecl.h
COLORDIALOG_H=ColorDialog.h colors.h ChooseFont.h
DEBUG_H=debug.h cdecl.h
FILER_H=filer.h glob.h dialogs.h privctrl/privctrl.h DnD.h
FNS_H=fns.h xcolor.h
GEN_STDAFX_H=gen-stdafx.h cdecl.h charset.h targetver.h
KBD_H=kbd.h reconv.h gime.h
NUMBER_H=number.h bignum.h
PREVIEW_H=preview.h wheel.h
RANDOM_H=random.h dsfmt/dSFMT.h
SHA2_H=sha2.h cdecl.h
SIGNAL_H=signal.h gen/msgcode.h
SOCKINET_H=sockinet.h sock.h
STDAFX_H=stdafx.h targetver.h
STRBUF_H=StrBuf.h cdecl.h
STRING_H=string.h array.h
SYSDEP_H=sysdep.h cdecl.h
UTIMER_H=utimer.h xlist.h
VECTOR_H=vector.h array.h
ARCHIVER_H=archiver.h $(ARC_IF_H)
BUFFER_H=Buffer.h $(ALLOC_H) kanji.h syntax.h
BUFFER_BAR_H=buffer-bar.h $(DOCKBAR_H) DnD.h
BYTE_STREAM_H=byte-stream.h $(STRBUF_H) encoding.h
CHAR_H=char.h $(CHTYPE_H) charset.h
CLOSURE_H=closure.h $(NUMBER_H)
DATA_H=data.h cdecl.h $(ALLOC_H)
MAINFRAME_H=mainframe.h $(DOCKBAR_H) pane.h
PROCESS_H=process.h $(BUFFER_H)
SOCKSSL_H=sockssl.h $(SOCKINET_H)
WSTREAM_H=wstream.h $(STRBUF_H)
LISP_H=lisp.h $(FNS_H) gen/vars-decl.h gen/fns-decl.h gen/msgcode.h $(SIGNAL_H) $(DATA_H) utils.h cons.h symbol.h function.h $(CLOSURE_H) $(NUMBER_H) $(CHAR_H) list.h $(VECTOR_H) $(STRING_H) stream.h package.h hash.h message.h error.h trace.h $(RANDOM_H) structure.h readtab.h cdecl.h
ED_H=ed.h clipboard.h $(PROCESS_H) dll.h chunk.h oledata.h waitobj.h ces.h $(KBD_H) mouse.h statarea.h timer.h font.h $(UTIMER_H) $(BUFFER_H) Window.h syntax.h msgbox.h resource.h $(SYSDEP_H) xcolor.h $(LISP_H) vfs.h wm.h mousemsg.h
SYSTEM_H=system.h $(ED_H)

Buffer.o: $(STDAFX_H) $(ED_H) syntaxinfo.h $(FILER_H) $(BINFO_H) $(BUFFER_BAR_H) version.h
ChooseFont.o: $(STDAFX_H) $(ED_H) ChooseFont.h
ColorDialog.o: $(STDAFX_H) $(ED_H) ldialog.h $(COLORDIALOG_H) conf.h font.h
DnD.o: $(STDAFX_H) $(ED_H) ctxmenu.h com.h $(FILER_H) $(BUFFER_BAR_H)
StrBuf.o: $(STDAFX_H) $(ED_H) $(STRBUF_H)
Window.o: $(STDAFX_H) $(ED_H) conf.h ipc.h wheel.h
alloc.o: $(STDAFX_H) $(ALLOC_H)
appid.o: $(STDAFX_H) $(LISP_H) appid.h version.h
arc-if.o: $(STDAFX_H) $(ARC_IF_H) vfs.h
archiver.o: $(STDAFX_H) $(ARC_IF_H) $(ARCHIVER_H) safe_ptr.h $(ED_H) except.h
array.o: $(STDAFX_H) $(ED_H)
assert.o: $(STDAFX_H) cdecl.h
backq.o: $(STDAFX_H) $(ED_H)
bignum.o: $(STDAFX_H) $(ED_H)
binfo.o: $(STDAFX_H) $(ED_H) $(BINFO_H)
buffer-bar.o: $(STDAFX_H) $(ED_H) $(MAINFRAME_H) $(BUFFER_BAR_H) colors.h
byte-stream.o: $(STDAFX_H) $(ED_H) $(BYTE_STREAM_H)
bytecode.o: $(STDAFX_H) $(ED_H) lex.h
ces.o: $(STDAFX_H) $(ED_H)
char.o: $(STDAFX_H) $(ED_H)
chname.o: $(STDAFX_H) $(CHTYPE_H)
chunk.o: $(STDAFX_H) $(ED_H) except.h
clipboard.o: $(STDAFX_H) $(ED_H) clipboard.h
colors.o: $(STDAFX_H) $(ED_H) colors.h conf.h $(FILER_H) $(MAINFRAME_H)
com.o: $(STDAFX_H) $(ED_H) com.h oleconv.h $(SYSDEP_H)
conf.o: $(STDAFX_H) $(ED_H) environ.h print.h conf.h
ctl3d.o: $(STDAFX_H) $(SYSDEP_H) ctl3d.h vfs.h
data.o: dataP.h dataP.h dataP.h $(STDAFX_H) dataP.h dataP.h dataP.h dataP.h dataP.h dataP.h dataP.h dataP.h $(ED_H) dataP.h lex.h symtable.h $(MAINFRAME_H) dataP.h dataP.h
dde.o: $(STDAFX_H) $(ED_H) xdde.h safe_ptr.h
debug.o: $(STDAFX_H) $(LISP_H) $(DEBUG_H)
dialogs.o: monitor.h $(STDAFX_H) $(ED_H) conf.h privctrl/privctrl.h dialogs.h ofn.h thread.h xstrlist.h version.h
disp.o: $(STDAFX_H) $(ED_H) $(BINFO_H) syntaxinfo.h lucida-width.h gen/jisx0212-hash.h $(MAINFRAME_H) regex.h
dll.o: $(STDAFX_H) $(ED_H) except.h
doc.o: $(STDAFX_H) $(ED_H) except.h mman.h
dockbar.o: $(STDAFX_H) $(ED_H) $(DOCKBAR_H) mman.h
dpp.o: $(GEN_STDAFX_H)
edict.o: $(STDAFX_H) $(ED_H) except.h mman.h
encdec.o: $(STDAFX_H) $(ED_H) $(BYTE_STREAM_H) md5.h sha1.h $(SHA2_H)
encoding.o: $(STDAFX_H) $(ED_H) encoding.h gen/ibmext.h gen/utf2sjis.h
environ.o: $(STDAFX_H) $(ED_H) environ.h conf.h fnkey.h monitor.h
eval.o: $(STDAFX_H) $(ED_H) lex.h symtable.h
except.o: $(STDAFX_H) $(ED_H) except.h $(SIGNAL_H) version.h
fileio.o: $(STDAFX_H) $(ED_H) kanji.h except.h mman.h encoding.h
filer.o: $(STDAFX_H) $(ED_H) environ.h conf.h font.h $(FILER_H) colors.h ctxmenu.h com.h
fnkey.o: $(STDAFX_H) $(ED_H) fnkey.h
font.o: $(STDAFX_H) $(ED_H) conf.h
gime.o: $(STDAFX_H) gime.h
glob.o: $(STDAFX_H) $(ED_H) glob.h
guess.o: $(STDAFX_H) $(ED_H) $(BYTE_STREAM_H) guess.h guess_tab.c
guid.o: $(STDAFX_H)
gzip.o: $(STDAFX_H) $(ED_H) $(BYTE_STREAM_H) zlib/zlib.h
hash.o: $(STDAFX_H) $(ED_H)
hashpjw.o: $(STDAFX_H) $(ED_H) cdecl.h
init.o: ipc.h kanji.h sock.h conf.h colors.h version.h $(MAINFRAME_H) $(STDAFX_H) $(ED_H) ctl3d.h environ.h except.h privctrl/privctrl.h xdde.h fnkey.h syntaxinfo.h
insdel.o: $(STDAFX_H) $(ED_H) syntaxinfo.h sequence.h $(BYTE_STREAM_H)
ipc.o: $(STDAFX_H) ipc.h
kanji.o: $(STDAFX_H) $(ED_H) $(STRBUF_H) safe_ptr.h $(BYTE_STREAM_H) gen/kanjitab.h gen/iso2022state.h guess.h
kbd.o: $(STDAFX_H) $(ED_H) $(FILER_H) safe_ptr.h encoding.h environ.h
keymap.o: $(STDAFX_H) $(ED_H)
ldialog.o: $(STDAFX_H) $(ED_H) ldialog.h $(COLORDIALOG_H) privctrl/privctrl.h
lex.o: $(STDAFX_H) $(ED_H) lex.h
list.o: $(STDAFX_H) $(ED_H) sequence.h
listen.o: $(STDAFX_H) $(ED_H) listen.h
lprint.o: $(STDAFX_H) $(ED_H) $(WSTREAM_H) sock.h version.h
lread.o: $(STDAFX_H) $(ED_H) $(STRBUF_H)
md5c.o: $(STDAFX_H) cdecl.h md5.h
menu.o: $(STDAFX_H) $(ED_H)
minibuf.o: $(STDAFX_H) $(ED_H)
mman.o: $(STDAFX_H) cdecl.h mman.h vfs.h
monitor.o: $(STDAFX_H) monitor.h
mouse.o: $(STDAFX_H) $(ED_H)
move.o: $(STDAFX_H) $(ED_H)
msgbox.o: $(STDAFX_H) $(ED_H) msgbox.h monitor.h
number.o: $(STDAFX_H) $(ED_H) gen/num-arith.h
oledata.o: $(STDAFX_H) $(ED_H) com.h oleconv.h
package.o: $(STDAFX_H) $(ED_H)
pane.o: $(STDAFX_H) $(ED_H) $(MAINFRAME_H) resource.h
pathname.o: vwin32.h version.h $(STDAFX_H) $(ED_H) pathname.h dyn-handle.h environ.h except.h mman.h thread.h xstrlist.h
popup.o: $(STDAFX_H) $(ED_H) monitor.h
popupl.o: $(STDAFX_H) $(ED_H) monitor.h
pred.o: $(STDAFX_H) $(ED_H) lex.h
preview.o: $(STDAFX_H) $(ED_H) resource.h print.h $(PREVIEW_H) conf.h
print.o: $(STDAFX_H) $(ED_H) print.h lucida-width.h $(PREVIEW_H) conf.h version.h
printdlg.o: $(STDAFX_H) $(ED_H) resource.h print.h printdlg.h conf.h
process.o: $(STDAFX_H) $(ED_H) dyn-handle.h $(SOCKINET_H) $(BYTE_STREAM_H) $(MAINFRAME_H)
random.o: $(STDAFX_H) $(ED_H)
regex.o: $(STDAFX_H) $(ED_H) regex.h
resolver.o: $(STDAFX_H) $(ED_H) resolver.h sockimpl.h
search.o: $(STDAFX_H) $(ED_H) regex.h $(STRBUF_H)
sequence.o: $(STDAFX_H) $(ED_H) sequence.h safe_ptr.h
sha1.o: $(STDAFX_H) cdecl.h sha1.h
sha2.o: $(STDAFX_H) cdecl.h endian.h $(SHA2_H)
signal.o: $(STDAFX_H) $(ED_H) $(SIGNAL_H)
sock.o: sock.h resolver.h sockimpl.h $(STDAFX_H) $(ED_H)
sockinet.o: $(STDAFX_H) $(ED_H) $(SOCKINET_H) sockimpl.h
sockssl.o: $(ED_H) safe_ptr.h $(SOCKINET_H) sockimpl.h $(SOCKSSL_H) $(STDAFX_H)
statarea.o: $(STDAFX_H) $(ED_H)
stdafx.o: $(STDAFX_H)
stdctl.o: $(STDAFX_H) $(ED_H)
stream.o: $(STDAFX_H) $(ED_H) sequence.h $(WSTREAM_H) $(SOCKINET_H) $(SOCKSSL_H) $(DEBUG_H)
string.o: $(STDAFX_H) $(ED_H) $(BYTE_STREAM_H) sequence.h $(STRBUF_H)
structure.o: $(STDAFX_H) $(ED_H)
symbol.o: $(STDAFX_H) $(ED_H)
symtable.o: $(STDAFX_H) $(ED_H) symtable.h gen/symtable.cc
syntax.o: $(STDAFX_H) $(ED_H) syntaxinfo.h
sysdep.o: $(STDAFX_H) $(SYSDEP_H) vfs.h resource.h
system.o: $(STDAFX_H) $(SYSTEM_H)
thread.o: $(STDAFX_H) $(ED_H) thread.h
toplev.o: DnD.h $(STDAFX_H) $(ED_H) appid.h ctl3d.h environ.h fnkey.h $(MAINFRAME_H) reconv.h wheel.h
ucs2.o: $(STDAFX_H) cdecl.h charset.h ucs2tab.h gen/char-width.h
undo.o: $(STDAFX_H) $(ED_H)
usertab.o: $(STDAFX_H) $(ED_H) $(MAINFRAME_H) $(DOCKBAR_H) colors.h
usertool.o: $(STDAFX_H) $(ED_H) $(MAINFRAME_H) $(DOCKBAR_H)
utils.o: $(STDAFX_H) cdecl.h $(ED_H) utils.h $(CHTYPE_H)
utimer.o: $(STDAFX_H) $(ED_H)
vector.o: $(STDAFX_H) $(ED_H) sequence.h
version.o: $(STDAFX_H) cdecl.h version.h gen/version-describe.h
vfs.o: $(STDAFX_H) $(ED_H) dyn-handle.h vwin32.h
wheel.o: $(STDAFX_H) $(ED_H) wheel.h
winhelp.o: $(STDAFX_H) $(ED_H) resource.h oleconv.h
wstream.o: $(STDAFX_H) $(ED_H) $(WSTREAM_H)
xdde.o: xdde.h $(SYSDEP_H) $(STDAFX_H) $(ED_H)
xlist.o: $(STDAFX_H) xlist.h
xpi.o: $(STDAFX_H) xpi.h

$(GEN_DIR):
	mkdir $@
%.o: %.cc
	$(CXX) $(CFLAGS) -c -o $@ $<
gen-%.exe: gen-%.cc
	$(CXX) $(CFLAGS) -o $@ $<
dpp.exe: dpp.cc
	$(CXX) $(CFLAGS) -o $@ $<

$(GEN_DIR)/chtab.cc: gen-ctab.exe
	$(WINE) $< > $@
$(GEN_DIR)/msgcode.h: gen-msg.exe
	$(WINE) $< -enum > $@
$(GEN_DIR)/vars-decl.h: gen-syms.exe
	$(WINE) $< -vars > $@
$(GEN_DIR)/fns-decl.h: gen-syms.exe
	$(WINE) $< -proto > $@
$(GEN_DIR)/jisx0212-hash.h: gen-jisx0212-hash.exe
	$(WINE) $< > $@
$(GEN_DIR)/ibmext.h: gen-ibmext.exe
	$(WINE) $< > $@
$(GEN_DIR)/utf2sjis.h: gen-utf2sjis.exe
	$(WINE) $< > $@
$(GEN_DIR)/iso2022state.h: gen-iso2022state.exe
	$(WINE) $< > $@
$(GEN_DIR)/kanjitab.h: gen-ktab.exe
	$(WINE) $< > $@
$(GEN_DIR)/num-arith.h: dpp.exe num-arith.d
	$(WINE) $< $(word 2, $^) $@
$(GEN_DIR)/symtable.cc: gen-syms.exe
	$(WINE) $< -symtable > $@
$(GEN_DIR)/char-width.h: gen-char-width.exe
	$(WINE) $< > $@
$(GEN_DIR)/msgdef.cc: gen-msg.exe
	$(WINE) $< -c > $@
$(GEN_DIR)/dumpver.cc: gen-syms.exe
	$(WINE) $< -version > $@
$(GEN_DIR)/version-describe.h:
	../misc/update_version_describe.sh
