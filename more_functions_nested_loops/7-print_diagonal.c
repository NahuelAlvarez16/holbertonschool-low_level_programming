#include "main.h"
/**
 * print_line - Print 0 to 14
 * @n: Length of line
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		if (i > 0)
		{
			int space;

			for (space = 0; space < n - i; space++)
				_putchar(' ');
			_putchar(92);
		}
	}
	_putchar('\n');
}
