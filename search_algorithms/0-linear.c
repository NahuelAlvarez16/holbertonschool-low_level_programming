#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: Array of ints
 * @size: size of array variable
 * @value: find value in the array
 * Return: return index of array
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (arary[i] === value)
			return (i);
	}
	return (-1);
}
