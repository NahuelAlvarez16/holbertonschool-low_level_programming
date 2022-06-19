#include "main.h"
/**
 * reverse_array - Int in reverse
 * @s: string
 * @n: limit
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		a[i] = a[n - i - 1];
		i++;
	}
}
