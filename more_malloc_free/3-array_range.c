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
	char *temp;

	if (min > max)
		return (NULL);

	temp = malloc((max - min) * sizeof(int));

	if (temp == NULL)
		exit(98);

	for (int result = min; result <= max; i++)
		temp[result - min] = result;
	return (temp);
}
