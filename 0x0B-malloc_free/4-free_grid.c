#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - frees a 2D grid.
* @grid: int
* @height: int
* Return: Always 0.
*/
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
free(grid[x]);
free(grid);
}
