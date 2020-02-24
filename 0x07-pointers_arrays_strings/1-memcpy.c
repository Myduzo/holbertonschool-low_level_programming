#include "holberton.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest : char
 * @src : char
 * @n : unsigned int
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
