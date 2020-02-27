#include "holberton.h"
/**
* prime - a prime number function.
* @i: int
* @n: int
* Return: Always 0.
*/
int prime(int i, int n)
{
if (n < 2)
return (0);
else if (i > n / 2)
return (1);
else
return (prime(i + 1, n));
}
/**
* is_prime_number - prime number.
* @n: int
* Return: Always 0.
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (prime(2, n));
}
