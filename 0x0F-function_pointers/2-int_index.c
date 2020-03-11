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
