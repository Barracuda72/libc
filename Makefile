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
	linsys.o \
	crt0.o

INC=-I. -I./include
IGN=-D__IGNORE_UNIMPLEMENTED_STDIO -D__IGNORE_UNIMPLEMENTED_STRING

CPPFLAGS:=-m64 -nostdinc -fPIC ${INC} ${IGN}
CFLAGS:=${CPPFLAGS} -g -ffreestanding -nostdlib -nodefaultlibs -Wall -Wextra -std=c11
ASFLAGS:=${CPPFLAGS} -Wa,--64 -Wa,-g
LDFLAGS:=-z max-page-size=0x1000 -m elf_x86_64

PREFIX:=x86_64-pc-linux-gnu-
VERSION:=-4.9.4
CC:=$(PREFIX)gcc$(VERSION)
LD:=$(PREFIX)ld
RANLIB:=$(PREFIX)ranlib
NM:=$(PREFIX)nm
AR:=$(PREFIX)ar

OBJS=$(CTYPE) $(INTTYPES) $(LOCALE) $(SETJMP) $(STDARG) $(STRING) $(TIME) $(UCHAR) $(PLATFORM)

all: static dynamic

static: libc.a

dynamic: libc.so

libc.a: $(OBJS)
	$(AR) rcs $@ $^

libc.so: $(OBJS)
	$(CC) -shared -nostdlib -nodefaultlibs $^ -o $@

clean:
	-rm $(OBJS)