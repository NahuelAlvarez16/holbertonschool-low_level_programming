#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: Array
 * @height: Heigth of Array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		if (grid[i] == NULL)
			free(grid[i]);
		i++;
	}
}
