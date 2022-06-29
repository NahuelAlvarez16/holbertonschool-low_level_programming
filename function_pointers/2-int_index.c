#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 * @array: Array of ints
 * @size: Size of Array.
 * @cmp: Function.
 * Return: Index of match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && size && array)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
