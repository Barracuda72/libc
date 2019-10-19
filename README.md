Feature-incomplete implementation of C Standard Library.
Tries to be compatible with latest (C17) standart.

# Restrictions
Due to minimalistic design, library does not support most of optional features
from standard. There is no complex numbers, threads, locales, multi-byte
encodings, atomics, etc.

# Implementation status
## Generic status
|Paragraph|Header|Completion|Comments|
|---------|------|----------|--------|
| 7.2  | assert.h     | 100% | Probably GCC-specific |
| 7.3  | complex.h    | 100% | Not supported |
| 7.4  | ctype.h      | 100% |           |
| 7.5  | errno.h      | 100% |           |
| 7.6  | fenv.h       |   0% |           |
| 7.7  | float.h      |   0% |           |
| 7.8  | inttypes.h   | 100% |           |
| 7.9  | iso646.h     | 100% |           |
| 7.10 | limits.h     | 100% |           |
| 7.11 | locale.h     | 100% | Only C locale |
| 7.12 | math.h       |   0% |           |
| 7.13 | setjmp.h     |  10% | WIP       |
| 7.14 | signal.h     |   5% | WIP       |
| 7.15 | stdalign.h   | 100% |           |
| 7.16 | stdarg.h     |  10% | Only GCC supported |
| 7.17 | stdatomic.h  | 100% | Not supported |
| 7.18 | stdbool.h    | 100% |           |
| 7.19 | stddef.h     | 100% |           |
| 7.20 | stdint.h     | 100% |           |
| 7.21 | stdio.h      |   0% |           |
| 7.22 | stdlib.h     |   0% |           |
| 7.23 | stdnoreturn.h| 100% |           |
| 7.24 | string.h     | 100% | Requires some testing |
| 7.25 | tgmath.h     |   0% |           |
| 7.26 | threads.h    | 100% | Not supported |
| 7.27 | time.h       |  40% |           |
| 7.28 | uchar.h      |  10% |           |
| 7.29 | wchar.h      |   0% |           |
| 7.30 | wctype.h     |   0% |           |

## By headers
### assert.h
### complex.h
### ctype.h
|Paragraph|Function |Completion| Comments |
|---------|---------|---------|----------|
| 7.4.1.1 |isalnum  | 100%    |          |
| 7.4.1.2 |isalpha  | 100%    |          |
| 7.4.1.3 |isblank  | 100%    |          |
| 7.4.1.4 |iscntrl  | 100%    |          |
| 7.4.1.5 |isdigit  | 100%    |          |
| 7.4.1.6 |isgraph  | 100%    |          |
| 7.4.1.7 |islower  | 100%    |          |
| 7.4.1.8 |isprint  | 100%    |          |
| 7.4.1.9 |ispunct  | 100%    |          |
| 7.4.1.10|isspace  | 100%    |          |
| 7.4.1.11|isupper  | 100%    |          |
| 7.4.1.12|isxdigit | 100%    |          |
| 7.4.2.1 |tolower  | 100%    |          |
| 7.4.2.2 |toupper  | 100%    |          |
### errno.h
### fenv.h
### float.h
### inttypes.h
### iso646.h
### limits.h
### locale.h
### math.h
### setjmp.h
### signal.h
### stdalign.h
### stdarg.h
### stdatomic.h
### stdbool.h
### stddef.h
### stdint.h
### stdio.h
### stdlib.h
|Paragraph|Function|Completion|Comments|
|---------|----------|----------|--------|
| 7.22.1.1 |atof     |   0% |    |
| 7.22.1.2 |atoi     |   0% |    |
| 7.22.1.2 |atol     |   0% |    |
| 7.22.1.2 |atoll    |   0% |    |
| 7.22.1.3 |strtod   |   0% |    |
| 7.22.1.3 |strtof   |   0% |    |
| 7.22.1.3 |strtold  |   0% |    |
| 7.22.1.4 |strtol   |   0% |    |
| 7.22.1.4 |strtoll  |   0% |    |
| 7.22.1.4 |strtoul  |   0% |    |
| 7.22.1.4 |strtoull |   0% |    |
| 7.22.2.1 |rand     |   0% |    |
| 7.22.2.2 |srand    |   0% |    |
| 7.22.3.1 |aligned_alloc   |   0% |    |
| 7.22.3.2 |calloc    |   0% |    |
| 7.22.3.3 |free      |   0% |    |
| 7.22.3.4 |malloc    |   0% |    |
| 7.22.3.5 |realloc   |   0% |    |
| 7.22.4.1 |abort     |   0% |    |
| 7.22.4.2 |atexit    |   0% |    |
| 7.22.4.3 |at_quick_exit   |   0% |    |
| 7.22.4.4 |exit      |   0% |    |
| 7.22.4.5 |_Exit     |   0% |    |
| 7.22.4.6 |getenv    |   0% |    |
| 7.22.4.7 |quick_exit   |   0% |    |
| 7.22.4.8 |system    |   0% |    |
| 7.22.5.1 |bsearch   |   0% |    |
| 7.22.5.2 |qsort     |   0% |    |
| 7.22.6.1 |abs       |   0% |    |
| 7.22.6.1 |labs      |   0% |    |
| 7.22.6.1 |llabs     |   0% |    |
| 7.22.6.2 |div       |   0% |    |
| 7.22.6.2 |ldiv      |   0% |    |
| 7.22.6.2 |lldiv     |   0% |    |
| 7.22.7.1 |mblen     |   0% |    |
| 7.22.7.2 |mbtowc    |   0% |    |
| 7.22.7.3 |wctomb    |   0% |    |
| 7.22.8.1 |mbstowcs  |   0% |    |
| 7.22.8.2 |wcstombs  |   0% |    |
### stdnoreturn.h
### string.h
|Paragraph|Function|Completion|Comments|
|---------|--------|----------|--------|
| 7.24.2.1 |memcpy   | 100% |    |
| 7.24.2.2 |memmove  | 100% |    |
| 7.24.2.3 |strcpy   | 100% |    |
| 7.24.2.4 |strncpy  | 100% |    |
| 7.24.3.1 |strcat   | 100% |    |
| 7.24.3.2 |strncat  | 100% |    |
| 7.24.4.1 |memcmp   | 100% |    |
| 7.24.4.2 |strcmp   | 100% |    |
| 7.24.4.3 |strcoll  | 100% | Only C locale |
| 7.24.4.4 |strncmp  | 100% |    |
| 7.24.4.5 |strxfrm  | 100% | Only C locale |
| 7.24.5.1 |memchr   | 100% |    |
| 7.24.5.2 |strchr   | 100% |    |
| 7.24.5.3 |strcspn  | 100% |    |
| 7.24.5.4 |strpbrk  | 100% |    |
| 7.24.5.5 |strrchr  | 100% |    |
| 7.24.5.6 |strspn   | 100% |    |
| 7.24.5.7 |strstr   | 100% | Not tested |
| 7.24.5.8 |strtok   | 100% | Not tested |
| 7.24.6.1 |memset   | 100% |    |
| 7.24.6.2 |strerror | 100% |    |
| 7.24.6.3 |strlen   | 100% |    |
### tgmath.h
### threads.h
### time.h
|Paragraph|Function|Completion|Comments|
|---------|--------|----------|--------|
| 7.27.2.1 |clock        |   0% |    |
| 7.27.2.2 |difftime     |   5% | hack  |
| 7.27.2.3 |mktime       | 100% |    |
| 7.27.2.4 |time         |   5% | WIP   |
| 7.27.2.5 |timespec_get |   5% | WIP   |
| 7.27.3.1 |asctime      | 100% |    |
| 7.27.3.2 |ctime        | 100% |    |
| 7.27.3.3 |gmtime       | 100% |    |
| 7.27.3.4 |localtime    |   5% | WIP   |
| 7.27.3.5 |strftime     |   0% |    |
### uchar.h
|Paragraph|Function|Completion|Comments|
|---------|--------|----------|--------|
| 7.28.1.1 | mbrtoc16| 50% | Not tested  |
| 7.28.1.2 | c16rtomb| 0% |    |
| 7.28.1.3 | mbrtoc32| 0% |    |
| 7.28.1.4 | c32rtomb| 0% |    |
### wchar.h
### wctype.h
