#include "search_algos.h"
/**
 * binary_search - Binary search algorithm
 * @array : array of integers
 * @size : array's size
 * @value : the value to search for
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, left = 0, right = size - 1;

	if (!value || !array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (value);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
 * print_array - function that prints the array
 * @array : array of integers
 * @left : the beginning of the array
 * @right : the ending of the array
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		if (left == right)
			printf("%d\n", array[left]);
		else
			printf("%d, ", array[left]);
		left++;
	}
}
