#include "main.h"
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
		result[0] += a[i][i / 1];
		result[1] += a[size - i][size - i];
		i++;
	}

}
