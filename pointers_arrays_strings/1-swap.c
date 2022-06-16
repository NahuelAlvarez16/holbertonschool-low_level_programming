#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: First number
 * @b: Second number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
