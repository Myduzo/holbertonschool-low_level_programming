#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @n : unsigned int.
 * @s1 : char.
 * @s2 : char.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, *m;
if (nmemb == 0 || size == 0)
return (NULL);
for (i = 0; i < size; i++)
;
m = malloc(sizeof(unsigned int) * nmemb);
if (!m)
{
return (NULL);
}
free(m);
return (m);
}
