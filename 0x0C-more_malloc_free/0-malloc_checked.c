#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b : unsigned int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
unsigned int i, *m;
for (i = 0; i < b; i++)
;
m = malloc(sizeof(unsigned int) * b);
if (!m)
{
exit(98);
}
return (m);
}
