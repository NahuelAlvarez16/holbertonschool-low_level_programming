#include <stdio.h>
#include <string.h>
/**
 * main - Print with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "_putchar";
	int position;
	int len = strlen(msg);

	for (position = 0; position < len; position++)
	{
		putchar(msg[position]);
	}
	putchar('\n');
	return (0);
}
