#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size : int
 * Return: Always 0.
 */
void print_square(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (size > 0)
{
putchar('#');
}
}
putchar('\n');
}
}
