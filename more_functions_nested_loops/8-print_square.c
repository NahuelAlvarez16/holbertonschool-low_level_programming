#include "main.h"
/**
 * print_square - Draws a square
 * @n: Length of square
 * Return: Always 0.
 */
void print_square(int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		int j;

		for (j = 0; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');
}
