#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - check the code for Holberton School students.
 * @a : char
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
while (i < 8)
{
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
j = 0;
i++;
_putchar('\n');
}
}
