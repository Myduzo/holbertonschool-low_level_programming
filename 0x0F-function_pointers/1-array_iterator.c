#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - a function that executes a function given.
* @array : int.
* @size : size_t.
* @action : int.
* Return: numbers.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
