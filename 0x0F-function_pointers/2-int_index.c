#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - a function that searches for an integer.
* @array : int.
* @size : int.
* @cmp : int.
* Return: integer.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp == NULL)
return (-1);

if (size <= 0)
return (-1);

if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
cmp(array[i]);
}
return (i);
}
