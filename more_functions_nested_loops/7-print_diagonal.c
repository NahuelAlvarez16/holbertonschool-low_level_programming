#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: Length of line
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		if (i > 0)
		{
			int space;

			for (space = 0; space < i - 1; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
