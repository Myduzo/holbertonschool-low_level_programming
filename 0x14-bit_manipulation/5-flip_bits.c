#include "holberton.h"
/**
* flip_bits - number of bits you would need to flip.
* @n : decimal number
* @m : decimal number
* Return: number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0, x = n ^ m;
while (x)
{
count += x & 1;
x >>= 1;
}
return (count);
}
