.PHONY: all
.PHONY: clean
.PHONY: debug
.PHONY: shortcuts

LIBNAME=shared
LIBS=-lc `pkg-config --libs gtk+-3.0`
VERSION=1.0.0
O = .o
SO = .so
LST = .lst
ASM = .asm
ASFLAGS= -felf64
LDFLAGS=-s -melf_x86_64
SONAME=lib$(LIBNAME)$(SO)

lib$(LIBNAME)$(SO) : $(LIBNAME)$(O) 
	ld $(LIBS) --dynamic-linker /lib64/ld-linux-x86-64.so.2 -shared -soname $(SONAME) -o lib$(LIBNAME)$(SO).$(VERSION) $(LIBNAME)$(O) -R .
	$(MAKE) shortcuts

$(LIBNAME)$(O) : $(LIBNAME)$(ASM)
	nasm $(ASFLAGS) -o $(LIBNAME)$(O) $(LIBNAME)$(ASM)
	
release:
	$(MAKE) lib$(LIBNAME)$(SO) ASFLAGS="-felf64" LDFLAGS="-melf_x86_64"
	$(MAKE) shortcuts

debug:
	$(MAKE) lib$(LIBNAME)$(SO) ASFLAGS="-felf64 -Fdwarf -g" LDFLAGS="-g -melf_x86_64"
	$(MAKE) shortcuts
	
clean:
	rm -f *$(O) lib$(LIBNAME).* *$(LST)

shortcuts:
	ln -sf lib$(LIBNAME)$(SO).$(VERSION) lib$(LIBNAME)$(SO)
	ln -sf lib$(LIBNAME)$(SO).$(VERSION) lib$(LIBNAME)$(SO).1
	ln -sf lib$(LIBNAME)$(SO).$(VERSION) lib$(LIBNAME)$(SO).1.0