#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @c: the char of memory to print
 * @size: the size of the memory to print
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ar;
ar = malloc(size * sizeof(char));
if (ar != NULL)
{
while (i <= size)
{
ar[i] = c;
i++;
}
return (ar);
}
else
{
return (NULL);
}
}
