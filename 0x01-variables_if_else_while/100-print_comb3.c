#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
int x = 0, y = 0, q = 1;
while (x < 10)
{
while (y < 10)
{
if ((x == 8 && y == 9) || (y >= q && x != 8))
{
putchar(x + '0');
putchar(y + '0');
}
if (y >= q && x != 8)
{
putchar(',');
putchar(' ');
}
y++;
}
y = 0;
q++;
x++;
}
putchar('\n');
return (0);
}
