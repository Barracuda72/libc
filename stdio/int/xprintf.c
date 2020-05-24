/*
 * int/xprintf.c
 *
 * Internal functions
 *
 * Generic *printf function
 *
 */

#include <assert.h>

#include <stdio.h>
#include <int/stdio.h>

static int int_put_char(struct int_stdio_desc* stream, int c)
{
  if (stream->limited && stream->n == 0)
    return EOF;

  if (stream->buffer != NULL)
  {
    if (stream->limited)
      stream->n--;

    *(stream->buffer) = (char)c;
    stream->buffer++;

    return c;
  }

  if (stream->stream != NULL)
  {
    return fputc(c, stream->stream);
  }

  // Shouldn't happen under normal circumstances

  return EOF;
}

static int int_put_string(struct int_stdio_desc* stream, char* s)
{
  int result = 0;
  int count = 0;

  while (result != EOF && *s)
  {
    result = int_put_char(stream, *s);
    if (result != EOF)
    {
      count++;
      s++;
    }
  }

  return count;
}

static void int_putdec(struct int_stdio_desc* stream, uint32_t byte);
static void int_puthex(struct int_stdio_desc* stream, uint8_t byte);
static void int_puthexi(struct int_stdio_desc* stream, uint32_t dword);
static void int_puthexl(struct int_stdio_desc* stream, uint64_t dword);
static void int_puthexd(struct int_stdio_desc* stream, uint8_t byte);
static void int_putbin(struct int_stdio_desc* stream, uint8_t byte);

// TODO: very old and doesn't conform to standart
int int_xprintf(struct int_stdio_desc* stream, const char* restrict format, va_list args)
{
  // TODO: actually count written bytes!
  int count = 0;

  while (*format) 
  {
    switch (*format) 
    {
      case '%':
        format++;
  
        switch (*format) 
        {
          case 's':
            int_put_string (stream, va_arg(args, char *));
            break;
      
          case 'c':
            int_put_char (stream, va_arg(args, uint32_t));
            break;
      
          case 'd':
          case 'i':
            int_putdec (stream, va_arg(args, uint32_t));
            break;
    
          case 'x':
            int_puthex (stream, va_arg(args, uint32_t));
            break;
      
          case 'X':
            int_puthexi (stream, va_arg(args, uint32_t));
            break;
    
          case 'l':
            int_puthexl (stream, va_arg(args, uint64_t));
            break;
    
          case 'b':
            int_putbin (stream, va_arg(args, uint32_t));
            break;
    /*
          case 'z':
            textcolor(va_arg(args,uint32_t));
            break;
    */
          default:
            int_put_char (stream, '%');
            int_put_char (stream, *format);
            break;
        }
        break;
        
      default:
        int_put_char (stream, *format);
        break;
    }

    format++;
  }

  return count;
}

static void int_putdec (struct int_stdio_desc* stream, uint32_t byte)
{
  uint8_t b1;
  int b[30];
  signed int nb;
  int i = 0;
  
  while (1)
  {
    b1 = byte%10;
    b[i] = b1;
    nb = byte/10;
    if (nb <= 0)
    {
      break;
    }
    i++;
    byte = nb;
  }
  
  for (nb = i+1; nb > 0; nb--)
  {
    int_puthexd (stream, b[nb-1]);
  }
}

static void int_puthexi (struct int_stdio_desc* stream, uint32_t dword)
{
  int_puthex (stream, (dword & 0xFF000000) >>24);
  int_puthex (stream, (dword & 0x00FF0000) >>16);
  int_puthex (stream, (dword & 0x0000FF00) >>8);
  int_puthex (stream, (dword & 0x000000FF));
}

static void int_puthexl (struct int_stdio_desc* stream, uint64_t qword)
{
  int_puthex (stream, (qword & 0xFF00000000000000) >>56);
  int_puthex (stream, (qword & 0x00FF000000000000) >>48);
  int_puthex (stream, (qword & 0x0000FF0000000000) >>40);
  int_puthex (stream, (qword & 0x000000FF00000000) >>32);
  int_puthex (stream, (qword & 0x00000000FF000000) >>24);
  int_puthex (stream, (qword & 0x0000000000FF0000) >>16);
  int_puthex (stream, (qword & 0x000000000000FF00) >>8);
  int_puthex (stream, (qword & 0x00000000000000FF));
}

static void int_puthex(struct int_stdio_desc* stream, uint8_t byte)
{
  unsigned char lb, rb;

  lb = byte >> 4;
  
  rb = byte & 0x0F;
  
  int_puthexd (stream, lb);
  int_puthexd (stream, rb);
}

static void int_puthexd (struct int_stdio_desc* stream, uint8_t digit)
{
  char table[] = "0123456789ABCDEF";
  int_put_char (stream, table[digit]);
}

static void int_putbin (struct int_stdio_desc* stream, uint8_t byte)
{
  for (int i = 0; i < 8; i++)
    int_puthexd (stream, ((byte<<i)>>7)&0x01);
}

