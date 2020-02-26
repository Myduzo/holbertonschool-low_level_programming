#include "holberton.h"
/**
* sx - check the code for Holberton School students.
* @i: int
* @n: int
* Return: Always 0.
*/
int sx(int i, int n)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (sx(i + 1, n));
}
/**
* _sqrt_recursion - check the code for Holberton School students.
* @n: int
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else
return (sx(1, n));
}
