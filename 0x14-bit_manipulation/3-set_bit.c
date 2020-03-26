#include "holberton.h"
/**
* set_bit - set a bit
* @n : decimal number
* @index : bit place
* Return: 1.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (!index && !n)
return (-1);

if (index < sizeof(*n) * 8)
*n |= 1 << index;

return (1);
}
