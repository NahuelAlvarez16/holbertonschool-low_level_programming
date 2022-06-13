#include "main.h"
/**
 * print_times_table - Print times table.
 * @n: Prints the n
 */
void print_times_table(int n)
{
	int digit = 0, multiplicate = 0;

	while (digit <= n)
	{
		int result = digit * multiplicate;

		if (result > 99)
			_putchar(result / 100 + '0');
		if (multiplicate > 0)
		_putchar((result > 99)  ? ((result / 10) % 10) + '0' : (result > 9) ? result / 10 + '0' : ' ');
		_putchar(result % 10 + '0');

		if (multiplicate < n)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			multiplicate++;
		}
		else
		{
			_putchar('\n');
			multiplicate = 0;
			digit++;
		}
	}
}
