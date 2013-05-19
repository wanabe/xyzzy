all: Buffer.o

Buffer.o: Buffer.cc chtab.cc
	$(CXX) -c -o $@ $<
chtab.cc: gen-ctab.exe
	$(WINE) gen-ctab.exe > chtab.cc
gen-ctab.exe: gen-ctab.cc
	$(CXX) -o gen-ctab.exe gen-ctab.cc
