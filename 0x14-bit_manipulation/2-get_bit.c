#include "holberton.h"
/**
* get_bit - returns the value of a bit.
* @n : decimal number
* @index : bit
* Return: value of a bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int x = 0;
if (index >= sizeof(unsigned long int) * 8)
return (-1);

x = n >> index;
return (x & 1);
}
