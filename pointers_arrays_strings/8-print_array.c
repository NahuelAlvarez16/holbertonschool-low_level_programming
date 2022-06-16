#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array of integers
 * @a: Array
 * @n: Max print for positions
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (*(a + i) && n > i)
	{
		printf("%d", *(a + i));
		i++;
		if (*(a + i) && i != n)
			printf(", ");
	}
			printf("\n");
}
