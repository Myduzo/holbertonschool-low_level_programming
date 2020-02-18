#include "holberton.h"
/**
* puts_half - check the code for Holberton School students.
* @str : char
* Return: Always 0.
*/
void puts_half(char *str)
{
int i, j = 0;
while (str[j] != '\0')
{
j++;
}
if (j % 2 == 0)
{
for (i = i / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = ((i / 2) + 1); str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
