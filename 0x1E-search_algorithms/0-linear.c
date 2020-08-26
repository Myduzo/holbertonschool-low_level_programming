#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array : array of integers
 * @size : array's size
 * @value : the value to search for
 * Return : the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!value || !array)
		return (-1);

	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
