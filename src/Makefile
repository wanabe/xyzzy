CFLAGS = -D __XYZZY__ -D PRIVCTRL_NODLL -I privctrl -I gen -fpermissive -finput-charset=cp932 -fexec-charset=cp932
GEN_DIR = gen
depend = $1: $(addprefix $(GEN_DIR)/, $2)

all: $(GEN_DIR) Buffer.o ChooseFont.o ColorDialog.o DnD.o StrBuf.o Window.o\
     alloc.o appid.o arc-if.o archiver.o array.o assert.o backq.o bignum.o\
     binfo.o buffer-bar.o byte-stream.o bytecode.o ces.o char.o chname.o\
     chunk.o clipboard.o colors.o com.o conf.o ctl3d.o data.o dde.o debug.o\
     dialogs.o disp.o dll.o doc.o dockbar.o dpp.o edict.o encdec.o encoding.o\
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
     xdde.o xlist.o xpi.o

$(call depend, gen-msg.exe, chtab.cc)
$(call depend, Buffer.o, msgcode.h vars-decl.h fns-decl.h)
$(call depend, disp.o, jisx0212-hash.h)
$(call depend, encoding.o, ibmext.h utf2sjis.h)
$(call depend, kanji.o, iso2022state.h kanjitab.h)
$(call depend, number.o, num-arith.h)
$(call depend, symtable.o, symtable.cc)
$(call depend, ucs2.o, char-width.h)

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
