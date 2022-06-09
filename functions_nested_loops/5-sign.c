#include "main.h"
/**
 * print_sign - Print sign each number
 * @c: Is un number
 * Return: Always 0.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
