#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char X;
int i;
for (i = 0; i <= 10; i++)
{
for (X = 'a'; X <= 'z'; X++)
{
_putchar(X);
}
if (X == 'z')
_putchar('\n');
}
}
