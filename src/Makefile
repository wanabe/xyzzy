all: Buffer.o

Buffer.o: Buffer.cc chtab.cc msgcode.h vars-decl.h fns-decl.h
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
