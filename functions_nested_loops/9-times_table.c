#include "main.h"
/**
 * times_table - Print the 9 times table.
 */
void times_table(void)
{
	int digit = 0, multiplicate = 0;

	while (digit < 10)
	{
		int result = digit * multiplicate;

		_putchar((result / 10) ? result / 10 + '0' : ' ');
		_putchar(result % 10 + '0');

		if (multiplicate < 9)
		{
			_putchar(',');
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
