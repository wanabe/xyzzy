all: Buffer.o ChooseFont.o ColorDialog.o DnD.o StrBuf.o Window.o alloc.o appid.o arc-if.o archiver.o array.o assert.o backq.o bignum.o binfo.o buffer-bar.o byte-stream.o bytecode.o ces.o char.o chname.o chunk.o clipboard.o colors.o com.o conf.o ctl3d.o data.o dde.o debug.o dialogs.o disp.o dll.o doc.o dockbar.o dpp.o edict.o encdec.o encoding.o environ.o eval.o except.o fileio.o filer.o fnkey.o font.o gen-char-width.o gen-ctab.o gen-fontrange.o gen-ibmext.o gen-iso2022state.o gen-jisx0212-hash.o gen-jisx0212-width.o gen-ktab.o gen-lucida-width.o gen-main.o gen-msg.o gen-stdafx.o gen-syms.o gen-ucs2tab.o gen-utf2sjis.o gime.o glob.o guess.o guid.o gzip.o hash.o hashpjw.o init.o insdel.o ipc.o kanji.o kbd.o keymap.o ldialog.o lex.o list.o listen.o lprint.o lread.o md5c.o menu.o minibuf.o mman.o monitor.o mouse.o move.o msgbox.o number.o oledata.o package.o pane.o pathname.o popup.o popupl.o pred.o preview.o print.o printdlg.o process.o random.o regex.o resolver.o search.o sequence.o sha1.o sha2.o signal.o sock.o sockinet.o sockssl.o statarea.o stdafx.o stdctl.o stream.o string.o structure.o symbol.o symtable.o syntax.o sysdep.o system.o thread.o toplev.o ucs2.o undo.o usertab.o usertool.o utils.o utimer.o vector.o version.o vfs.o wheel.o winhelp.o wstream.o xdde.o xlist.o xpi.o

%.o: %.cc chtab.cc msgcode.h vars-decl.h fns-decl.h
	$(CXX) -I privctrl -fpermissive -c -o $@ $<
gen-ctab.exe: gen-ctab.cc
	$(CXX) -o $@ $<
gen-msg.exe: gen-msg.cc
	$(CXX) -o $@ $<
gen-syms.exe: gen-syms.cc
	$(CXX) -o $@ $<
chtab.cc: gen-ctab.exe
	$(WINE) $< > $@
msgcode.h: gen-msg.exe
	$(WINE) $< -enum > $@
vars-decl.h: gen-syms.exe
	$(WINE) $< -vars > $@
fns-decl.h: gen-syms.exe
	$(WINE) $< -proto > $@