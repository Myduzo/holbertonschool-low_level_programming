#include "holberton.h"
/**
* clear_bit - clear a bit
* @n : decimal number
* @index : bit place
* Return: 1.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
return (-1);

*n &= ~(1 << index);
return (1);
}
