#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator : char
* @n : int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list newlist;
int numbers = 0;
unsigned int x;

if (separator == NULL)
return;

va_start(newlist, n);
x = 0;
while (x < n)
{
numbers = va_arg(newlist, int);
printf("%d", numbers);
if (x != n - 1)
{
printf("%s", separator);
}
x++;
}
va_end(newlist);
printf("\n");
}
