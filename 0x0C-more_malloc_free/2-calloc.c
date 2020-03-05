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
unsigned int i, *m;
m = malloc(sizeof(unsigned int) * nmemb);
if (!m)
return (NULL);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
m[i] = 0;
}
return (m);
}
