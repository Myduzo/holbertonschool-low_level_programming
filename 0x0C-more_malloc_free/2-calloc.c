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
unsigned int i;
char *m;
m = malloc(size * nmemb);
if (m == NULL)
return (NULL);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
for (i = 0; i < (size * nmemb); i++)
{
m[i] = 0;
}
return (m);
}
