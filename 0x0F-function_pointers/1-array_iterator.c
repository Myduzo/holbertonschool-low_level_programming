#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - a function that executes a function given.
* @array : int.
* @size : size_t.
* @action : int.
* Return: numbers.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; array[i] < size; i++)
action(array);
}
