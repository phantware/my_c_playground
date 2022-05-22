#include "main.h"
#include <stdarg.h>

int _printf(const char * const format, ...)
{
 va_list args;
 int i = 0;
 int n_display = 0;
 
 va_start(args, format);
while (format[i] != '\0')
{
   if (_putchar(format[i]))
    n_display += 1;

 i++;
}


var_end(args);
}