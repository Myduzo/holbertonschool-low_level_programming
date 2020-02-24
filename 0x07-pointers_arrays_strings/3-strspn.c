#include "holberton.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s : char
 * @accept :char
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j =	0;
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
if (accept[j] == '\0')
{
break;
}
j = 0;
i++;
}
return (i);
}
