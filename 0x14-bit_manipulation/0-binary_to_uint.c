#include "holberton.h"
/**
* binary_to_uint - convert a binary to decimal
* @b : binary
* Return: decimal number.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, x = 0;

if (b == NULL)
return (0);

while (b[i])
{
if (b[i] != '0' && b[i] != '1')
return (0);

x = x << 1;

if (b[i] == '1')
x = x ^ 1;

i++;
}
return (x);
}
