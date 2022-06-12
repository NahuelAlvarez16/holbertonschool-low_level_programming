#include "main.h"
/**
 * print_most_numbers - Print 0 to 9 except 2 and 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n < 15; n++)
	{
		if(n > 9)
			_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
		_putchar('\n');
}
