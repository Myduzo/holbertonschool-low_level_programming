#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* _char - print char
* @x : pointer
*/
void _char(va_list x)
{
printf("%c", va_arg(x, int));
}

/**
* _int - print integer
* @x : pointer
*/
void _int(va_list x)
{
printf("%i", va_arg(x, int));
}

/**
* _float - print float
* @x : pointer
*/
void _float(va_list x)
{
printf("%f", va_arg(x, double));
}

/**
* _string - print string
* @x : pointer
*/
void _string(va_list x)
{
char *string;
string = va_arg(x, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);
}

/**
* print_all - a function that prints anything.
* @format : char.
*/
void print_all(const char * const format, ...)
{
va_list x;
int i, j;
i = 0;
j = 0;
lamis tab[] = {
  {"c", _char},
  {"i", _int},
  {"f", _float},
  {"s", _string},
};

va_start(x, format);

while (j < 4)
{
while (format[i] != '\0')
{
if (format[i] == tab[j].ch)
tab[j].f(x);
i++;
}
j++;
}
va_end(x);
printf("\n");
}
