#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_to_98 - Print between n to 98.
 * @n: Start of n
 */
void print_to_98(int n)
{
	int count = 0;
	int stop = 0;

	while (!stop)
	{
		char N[3];
		int position;
		int len;

		sprintf(N, "%d", n);
		len = strlen(N);
		for (position = 0; position < len; position++)
		{
			_putchar(N[position]);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		count++;
		stop = n == 98 ? 1 : 0;
		n += n > 98 ? -1 : 1;
	}
	_putchar('\n');
}
