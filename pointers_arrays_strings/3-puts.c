#include "main.h"
/**
 * _puts - Print a string
 * @str: string
 */
void _puts(char *str)
{
	int i;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
