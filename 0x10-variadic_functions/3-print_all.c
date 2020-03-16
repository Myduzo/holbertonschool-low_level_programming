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
va_list x;
int i, j;

lamis tab[] = {
  {"c", _char},
  {"i", _int},
  {"f", _float},
  {"s", _string};
};

va_start(x, format);

i = 0;
x = 0;
while (format[i] != '\0')
{

if (format[i] == tab[j].ch[0])
tab[j].f(x);
i++;
}
va_end(x);
printf("\n");
}

void _char(va_list x)
{
printf("%c", va_arg(x, int));
}

void _int(va_list x)
{
printf("%i", va_arg(x, int));
}

void _float(va_list x)
{
printf("%f", va_arg(x, double));
}

void _string(va_list x)
{
char *string;
string = va_arg(x, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);
}
