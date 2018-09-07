Feature-incomplete implementation of C Standard Library.
Tries to be compatible with latest (C17) standart.

# Restrictions
Due to minimalistic design, library does not support most of optional features
from standard. There is no complex numbers, threads, locales, multi-byte
encodings, etc.

# Implementation status
## Generic status
|Paragraph|Header|Completion|Comments|
|---------|------|----------|--------|
| 7.2  | assert.h     | XXX% |           |
| 7.3  | complex.h    | XXX% |           |
| 7.4  | ctype.h      | 100% |           |
| 7.5  | errno.h      | 100% |           |
| 7.6  | fenv.h       |   0% |           |
| 7.7  | float.h      |   0% |           |
| 7.8  | inttypes.h   | 100% |           |
| 7.9  | iso646.h     | 100% |           |
| 7.10 | limits.h     | 100% |           |
| 7.11 | locale.h     | 100% | Only C locale |
| 7.12 | math.h       | 0% |           |
| 7.13 | setjmp.h     | 10% | WIP        |
| 7.14 | signal.h     | XXX% |           |
| 7.15 | stdalign.h   | XXX% |           |
| 7.16 | stdarg.h     | XXX% |           |
| 7.17 | stdatomic.h  | XXX% |           |
| 7.18 | stdbool.h    | XXX% |           |
| 7.19 | stddef.h     | XXX% |           |
| 7.20 | stdint.h     | XXX% |           |
| 7.21 | stdio.h      | XXX% |           |
| 7.22 | stdlib.h     | XXX% |           |
| 7.23 | stdnoreturn.h| XXX% |           |
| 7.24 | string.h     | XXX% |           |
| 7.25 | tgmath.h     | XXX% |           |
| 7.26 | threads.h    | XXX% |           |
| 7.27 | time.h       | XXX% |           |
| 7.28 | uchar.h      | XXX% |           |
| 7.29 | wchar.h      | XXX% |           |
| 7.30 | wctype.h     | XXX% |           |

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
### stdnoreturn.h
### string.h
### tgmath.h
### threads.h
### time.h
### uchar.h
### wchar.h
### wctype.h
