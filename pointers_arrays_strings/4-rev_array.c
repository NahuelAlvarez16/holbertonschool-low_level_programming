#include "main.h"
/**
 * reverse_array - Int in reverse
 * @a: Int of array
 * @n: limit
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
		i++;
	}
}
