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

	temp = malloc((width) + 1);

	if (temp == NULL)
		return (NULL);
	while (i < width)
	{
		int x = 0;

		while (x < height)
		{
			temp[i] = malloc((height) + 1);
			x++;
		}
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
