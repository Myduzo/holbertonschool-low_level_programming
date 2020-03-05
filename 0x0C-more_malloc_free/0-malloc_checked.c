#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b : unsigned int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
unsigned int *m;
m = malloc(b);
if (m == NULL)
{
exit(98);
}
return (m);
}
