#include "main.h"
/**
 * print_more_numbers - Print 0 to 9 except 2 and 4
 * Return: Always 0.
 */
void print_more_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)
		if (n == 2 && n == 4)
		_putchar(n + '0');
	_putchar('\n');
}
