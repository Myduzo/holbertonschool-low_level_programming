#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - check the code for Holberton School students.
* @a: int
* @size : int
* Return: Always 0.
*/
void print_diagsums(int *a, int size)
{
int i, r, c;
for (i = 0; i < size; i++)
{
r += *(a + i * size + i);
c += *(a + (i * size) + (size - 1 - i));
}
printf("%d, %d\n", r, c);
}
