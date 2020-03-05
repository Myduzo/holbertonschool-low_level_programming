#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb : unsigned int.
 * @size : unsigned int.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *m;
m = calloc(size, sizeof(unsigned int));
if (!m)
return (NULL);

if (nmemb == 0 || size == 0)
{
return (NULL);
}

return (m);
}
