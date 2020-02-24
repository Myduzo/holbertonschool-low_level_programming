#include "holberton.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s : char
 * @accept : char
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
break;
}
j++;
}
if (accept[j] != '\0')
return (s + i);
i++;
}
return (0);
}
