#include "search_algos.h"
/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array: array of sorted integers
 * @size: size of array
 * @value: value that search in array
 * Return: return index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0, mid = 0, start = 0, finish = 0;

	if ((int)size == 0)
		return (-1);
	finish = ((int)size - 1);
	while (start <= finish)
	{
		printf("Searching in array: ");
		for (i = start; i <= finish; i++)
			printf("%d%s", array[i], i != finish ? ", " : "\n");
		mid = (start + finish) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			finish = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
