#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, n;
for (n = 0; n <= 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
putchar(i / 10 + '0');
}
putchar(i % 10 + '0');
}
putchar('\n');
}
}
