#include "main.h"
#include <stdio.h>
#include <string.h>
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
		char N[10];
		int position;
		int len;

		sprintf(N, "%d", result);
		len = strlen(N);
		for (position = 0; position < len; position++)
		{
			_putchar(N[position]);
		}

		if (multiplicate < n)
		{
			_putchar(',');
			_putchar(' ');
			if((multiplicate + 1) * digit < 100)
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
