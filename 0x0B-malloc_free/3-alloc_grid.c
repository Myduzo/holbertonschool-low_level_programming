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
int i, j;
int **m;
if ((width <= 0) || (height <= 0))
return (NULL);

m = malloc(sizeof(char) * height);
if (m == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
m[i] = malloc(sizeof(char) * width);
if (m[i] == NULL)
return (NULL);

for (j = 0; j < width; j++)
m[i][j] = 0;
}
return (m);
}
