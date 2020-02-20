#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, l;
for (i = 0; i <= n / 2; i++, n--)
{
l = a[i];
a[i] = a[n];
a[n] = l;
}
}
