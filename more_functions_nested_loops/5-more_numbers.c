#include "main.h"
/**
 * more_numbers - Print 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
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
