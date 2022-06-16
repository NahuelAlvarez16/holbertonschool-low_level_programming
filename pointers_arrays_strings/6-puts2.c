#include "main.h"
/**
 * puts2 - Print a string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (*(str + length))
		length++;
	while (*(str + i) && length > i)
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
