#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min : int.
 * @max : int.
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
int i, j, *m;
if (min > max)
return (NULL);
for (i = 0; i < min; i++)
;
for (j = 0; j < max; j++)
;
m = malloc((sizeof(int) * min) + (sizeof(int) * max) + 1);
if (!m)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
m[i] = i;
}
return (m);
}
