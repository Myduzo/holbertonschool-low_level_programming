#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_all - a function that prints anything.
* @format : char.
*/
void print_all(const char * const format, ...)
{
va_list formatlist;
int x, i;

va_start(formatlist, format);

struct ceis {
  c : char;
  i : integer;
  f : float;
  s : char *;
}

i = 0;
x = 0;
while (format[i] != '\0')
{
va_arg(formatlist, char *);

if (s == NULL)
printf("(nil)");

if ()
i++;
}
va_end(formatlist);
printf("\n");
}
