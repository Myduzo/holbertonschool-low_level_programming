#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - a function that concatenates two strings.
 * @nmemb : unsigned int.
 * @size : unsigned int.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, *m;
if (nmemb == 0 || size == 0)
return (NULL);
for (i = 0; i < size; i++)
;
m = calloc(nmemb, size);
if (!m)
{
return (NULL);
}
free(m);
return (m);
}
