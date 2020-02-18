#include "holberton.h"
/**
* puts_half - check the code for Holberton School students.
* @str : char
* Return: Always 0.
*/
void puts_half(char *str)
{
int i = 0; 
int k;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
for (k = i / 2; str[k] != '\0'; k++)
{
_putchar(str[k]);
}
}
else
{
for (k = ((k / 2) + 1); str[k] != '\0'; k++)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
