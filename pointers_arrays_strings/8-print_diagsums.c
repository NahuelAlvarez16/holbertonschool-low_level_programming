#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Contents
 * @size: size of a variable
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int result[] = {0, 0};

	while (i < size)
	{
		result[0] += a[(i * size) + i];
		result[1] += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d\n", result[0], result[1]);

}
