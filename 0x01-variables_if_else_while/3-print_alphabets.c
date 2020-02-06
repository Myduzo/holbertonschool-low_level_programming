#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
char x;
char xx;
x = 'a';
xx = 'A';
while (x <= 'z')
{
putchar (x);
x++;
}
while (xx <= 'Z')
{
putchar (xx);
xx++;
}
putchar('\n');
return (0);
}
