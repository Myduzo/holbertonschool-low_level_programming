#include "holberton.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s : char
 * @c : char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
break;
}
return (s);
}
