#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char alphabet = 'a'; alphabet  <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
