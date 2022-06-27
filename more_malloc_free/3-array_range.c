#include <stdlib.h>
#include "main.h"
/**
 * array_range - that creates an array of integers.
 * @min: Min
 * @max: Max
 * Return: return pointer of ints
 */
int *array_range(int min, int max)
{
	int *temp;
	int  i = min;
	if (min > max)
		return (NULL);

	temp = malloc((max - min + 1) * sizeof(int));

	if (temp == NULL)
		exit(98);

	for (; i <= max; i++)
		temp[i - min] = i;
	return (temp);
}
