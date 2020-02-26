#include "holberton.h"
/**
 * wildcmp - a function that compares two strings.
 * @s1: int
 * @s2: int
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);
else
return (0);
}
