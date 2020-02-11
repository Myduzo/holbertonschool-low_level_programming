#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main (void)
{
char X;
int i;
for (i = 0; i <= 10; i++)
for (X = 'a'; X <= 'z'; X++)
{
_putchar(X);  
if(X == 'z')
_putchar('\n');
}
_putchar('\n');
return (0);
}
