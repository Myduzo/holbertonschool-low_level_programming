#include "holberton.h"
#include <stdlib.h>
/**
* _strlen - calculate string length.
* @s: string
* Return: length i.
*/
int **alloc_grid(int width, int height)
{
int x, y;
int **z;
if (width <= 0 || height <= 0)
return (NULL);
z = malloc(sizeof(*z) * height);
if (z == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
z[x] = malloc(width * sizeof(*z));
if (z[x] == NULL)
{
free(z);
return (NULL);
}
for (y = 0; y < width; y++)
z[x][y] = 0;
}
return (z);
}
