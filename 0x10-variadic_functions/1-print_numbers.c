#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator : char
* @n : int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list newlist;
unsigned int x;

if (separator == NULL)
return;

va_start(newlist, n);
x = 0;
while (x < n)
{
printf("%d", va_arg(newlist, int));
if (x != n - 1)
{
printf("%s", separator);
}
x++;
}

va_end(newlist);
printf("\n");
}
