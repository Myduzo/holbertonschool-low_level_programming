#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - a function that prints strings, followed by a new line.
* @separator : char
* @n : int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list stringlist;
char string[509];
unsigned int i, x;

va_start(stringlist, n);

if (separator == NULL)
return;

if (string == NULL)
printf("(nil)");

i = 0;
x = 0;
while (x < n && i < n)
{
printf("%s", va_arg(stringlist, char*));
i++;
if (x != n - 1)
printf("%s", separator);
x++;
}
va_end(stringlist);
printf("\n");
}
