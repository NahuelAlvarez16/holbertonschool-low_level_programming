#include "main.h"
/**
 * puts_half - Print half of string
 * @str: string
 */
void puts_half(char *str)
{
	int length = 0;
	int half;

	while (*(str + length))
		length++;
	half = length % 2 == 0 ? length / 2 : length / 2 + 1;

	while (*(str + half))
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
