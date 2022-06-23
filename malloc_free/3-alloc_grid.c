#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - create pointer to a 2 dimensional array of integers.
 * @width: Width of Array
 * @height: Heigth of Array
 * Return: return pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **temp;
	int i = 0;

	if (width && height)
	{
	temp = malloc(height * sizeof(int *));

	if (temp == NULL)
		return (NULL);
	while (i < height)
	{
		int x = 0;

		temp[i] = malloc(width * sizeof(int));
		if (temp[i] == NULL)
			return (NULL);

		while (x < width)
		{
			temp[i][x] = 0;
			x++;
		}
		i++;
	}
	return (temp);
	}

	return (NULL);
}
