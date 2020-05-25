CTYPE= \
	ctype/isalnum.o \
	ctype/isalpha.o \
	ctype/isblank.o \
	ctype/iscntrl.o \
	ctype/isdigit.o \
	ctype/isgraph.o \
	ctype/islower.o \
	ctype/isprint.o \
	ctype/ispunct.o \
	ctype/isspace.o \
	ctype/isupper.o \
	ctype/isxdigit.o \
	ctype/tolower.o \
	ctype/toupper.o

INTTYPES= \
  inttypes/imaxabs.o \
	inttypes/imaxdiv.o \
	inttypes/strtoimax.o \
	inttypes/strtoumax.o \
	inttypes/wcstoimax.o \
	inttypes/wcstoumax.o

LOCALE= \
  locale/localeconv.o \
	locale/setlocale.o

SETJMP= \
  setjmp/_setjmp.o \
	setjmp/longjmp.o

STDARG= \
  stdarg/_va_arg.o \
	stdarg/_va_copy.o \
	stdarg/_va_end.o \
	stdarg/_va_start.o

STDIO= \
  stdio/int/stdio.o \
  stdio/int/xprintf.o \
  stdio/int/xscanf.o \
  stdio/tmpfile.o\
  stdio/tmpnam.o \
  stdio/fclose.o \
  stdio/fflush.o \
  stdio/setbuf.o \
  stdio/setvbuf.o \
  stdio/fprintf.o \
  stdio/fscanf.o \
  stdio/printf.o \
  stdio/scanf.o \
  stdio/snprintf.o \
  stdio/sprintf.o \
  stdio/sscanf.o \
  stdio/vfprintf.o \
  stdio/vfscanf.o \
  stdio/vprintf.o \
  stdio/vscanf.o \
  stdio/vsnprintf.o \
  stdio/vsprintf.o \
  stdio/vsscanf.o \
  stdio/fgets.o \
  stdio/fputs.o \
  stdio/getc.o \
  stdio/getchar.o \
  stdio/putc.o \
  stdio/putchar.o \
  stdio/puts.o \
  stdio/ungetc.o \
  stdio/fread.o \
  stdio/fwrite.o \
  stdio/ftell.o \
  stdio/rewind.o \
  stdio/clearerr.o \
  stdio/feof.o \
  stdio/ferror.o \
  stdio/perror.o

STDLIB= \
  stdlib/qsort.o \
  stdlib/bsearch.o \
  stdlib/rand.o \
  stdlib/srand.o \
  stdlib/div.o \
  stdlib/ldiv.o \
  stdlib/lldiv.o \
  stdlib/system.o

STRING= \
  string/strncmp.o \
  string/strncpy.o \
  string/strncat.o \
  string/strcat.o \
  string/strxfrm.o \
  string/memset.o \
  string/strcmp.o \
  string/strcpy.o \
  string/strlen.o \
  string/memmove.o \
  string/memcmp.o \
  string/strcoll.o \
  string/memcpy.o \
  string/strerror.o

TIME= \
  time/asctime.o \
	time/clock.o \
	time/ctime.o \
	time/difftime.o \
	time/gmtime.o \
	time/int/time.o \
	time/localtime.o \
	time/mktime.o \
	time/strftime.o \
	time/time.o \
	time/timespec_get.o

UCHAR= \
  uchar/mbrtoc16.o

PLATFORM= \
	linsys.o

CRT= \
	crt0.o

INC=-I. -I./include
IGN=-D__IGNORE_UNIMPLEMENTED_STDIO -D__IGNORE_UNIMPLEMENTED_STDLIB 

TARGET:=-D_LIBC_POSIX
CPPFLAGS:=-m64 -nostdinc -fPIC $(INC) $(IGN) $(TARGET)
WARNINGS:=-Wall -Wextra -Wstrict-prototypes \
    -Wmissing-prototypes -Wold-style-definition \
    -Wno-missing-braces -Wno-missing-field-initializers -Wformat=2 \
    -Wswitch-default -Wswitch-enum -Wcast-align -Wpointer-arith \
    -Wbad-function-cast -Wstrict-overflow=5 -Winline \
    -Wundef -Wnested-externs -Wcast-qual -Wshadow -Wunreachable-code \
    -Wlogical-op -Wfloat-equal -Wstrict-aliasing=3 -Wredundant-decls \
    -fno-omit-frame-pointer -ffloat-store -fno-common -fstrict-aliasing
CFLAGS:=$(CPPFLAGS) -g -ffreestanding -nostdlib -nodefaultlibs -std=c18 -pedantic $(WARNINGS)
ASFLAGS:=$(CPPFLAGS) -Wa,--64 -Wa,-g
LDFLAGS:=-z max-page-size=0x1000 -m elf_x86_64

PREFIX:=x86_64-pc-linux-gnu-
VERSION:=-10.1.0
CC:=$(PREFIX)gcc$(VERSION)
LD:=$(PREFIX)ld
RANLIB:=$(PREFIX)ranlib
NM:=$(PREFIX)nm
AR:=$(PREFIX)ar

OBJS=$(CTYPE) $(INTTYPES) $(LOCALE) $(SETJMP) $(STDARG) $(STDIO) $(STDLIB) $(STRING) $(TIME) $(UCHAR) $(PLATFORM)

all: static dynamic

static: libc.a

dynamic: libc.so

libc.a: $(OBJS) $(CRT)
	$(AR) rcs $@ $^

libc.so: $(OBJS)
	$(CC) -shared -nostdlib -nodefaultlibs $^ -o $@

clean:
	-rm $(OBJS)
