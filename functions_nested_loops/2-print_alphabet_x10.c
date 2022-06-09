#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet x 10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet  <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
