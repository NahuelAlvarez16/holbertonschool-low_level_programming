#include "main.h"
/**
 * print_numbers - Print 0 to 9
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n = 0;
	for (; n < 10; n++)
		_putchar(n + '0');
	_putchar('\n');
}
