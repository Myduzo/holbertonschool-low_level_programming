#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
for (j = i + 1; j < 10; j++)
{
if (i != j || j != i)
{
putchar(i + '0');
putchar(j + '0');
putchar(44);
putchar(32);
}
}
return (0);
}
