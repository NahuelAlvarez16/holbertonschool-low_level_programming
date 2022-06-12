#include "main.h"
/**
 * print_line - Print 0 to 14
 * @n: Length of line
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i > 0)
			_putchar('_');
	}
	_putchar('\n');
}
