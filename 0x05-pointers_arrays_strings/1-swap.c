#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a : int
 * @b : int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
