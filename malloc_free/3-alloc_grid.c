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

	temp = malloc(heigth1 * sizeof(int*));

	if (temp == NULL)
		return (NULL);
	while (i < height)
	{
		int x = 0;
		
		temp[i] = malloc((height) + 1);
		while (x < width)
		{
			temp[i][x] = 0;
			x++;
		}
		i++;
	}
	return (temp);
}
