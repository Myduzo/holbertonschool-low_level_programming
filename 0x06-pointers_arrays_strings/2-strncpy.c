#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @dest : char
 * @src : char
 * @n : int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
i
	nt i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
;
dest[i] = '\0';
}
