#include <stdio.h>
/**
 * main - Print digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;

	for (number = '0'; number  <= '9'; number++)
		putchar(number);
	for (number = 'a'; number  <= 'f'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
