#include "holberton.h"
#include <stdlib.h>
/**
* *alloc_grid - calculate string length.
* @width: int
* @height: int
* Return: z.
*/
int **alloc_grid(int width, int height)
{
int i, j, x;
int **m;
if ((width <= 0) || (height <= 0))
return (NULL);

m = malloc(sizeof(int *) * height);
if (m == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
m[i] = malloc(sizeof(int) * width);
if (m[i] == NULL)
{
for (x = 0; x < i; x++)
{
free(m[x]);
free(m);
}
return (NULL);
}

for (j = 0; j < width; j++)
m[i][j] = 0;
}
return (m);
}
