#include "main.h"
/**
 * print_triangle - Draws a triangle
 * @size: Length of triangle
 */
void print_triangle(int size)
{
	int i = 0;

	for (; i < size; i++)
	{
		int j;

		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		for (j = 0; j < i + 1; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
