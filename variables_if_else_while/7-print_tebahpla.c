#include <stdio.h>
/**
 * main - Print the alphabet in lowercase in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet  >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
