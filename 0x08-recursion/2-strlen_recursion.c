#include "holberton.h"
/**
* _strlen_recursion - a function that prints a string in reverse.
* @s : char
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
int x = 0;
if (*s != '\0')
{
x = 1 + _strlen_recursion(++s);
}
else
{
return (0);
}
return (x);
}
