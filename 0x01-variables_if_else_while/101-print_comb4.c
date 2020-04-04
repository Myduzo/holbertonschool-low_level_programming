#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
int x = 0, y = 1, z = 2, q = 2, u = 2;
while (x < 10)
{
while (y < 9)
{
while (z < 10)
{
if (z >= q && y != z)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if (u != 9)
{
putchar(',');
putchar(' ');
}
}
z++;
}
z = u + 1;
q++;
y++;
}
q = 2;
y = x + 2;
x++;
u++;
}
return (0);
}
