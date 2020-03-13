#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n : const.
* Return: 0.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int x;
int sum = 0;

va_start(valist, n);

if (n == 0)
return (0);

x = 0;
while (x < n)
{
sum += va_arg(valist, int);
x++;
}
va_end(valist);
return (sum);
}
