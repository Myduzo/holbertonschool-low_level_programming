#include "holberton.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s : char
 * @c : char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
s++;
if (s[i] == c)
break;
}
return (s);
}
