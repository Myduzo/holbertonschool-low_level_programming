#include "holberton.h"
/**
* print_binary - convert from decimal to binary
* @n : decimal number
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar ((n & 1) + '0');
}
