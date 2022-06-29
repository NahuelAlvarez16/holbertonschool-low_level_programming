#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: Array
 * @size: Size of Array.
 * @action: function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		for (int i = 0; i < size; i++)
			action(array[i]);
}
