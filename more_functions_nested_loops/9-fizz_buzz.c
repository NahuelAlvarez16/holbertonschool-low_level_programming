#include "main.h"
#include <stdio.h>
/**
 * print_line - Print 0 to 100
 * Return: Always 0.
 */
int main (void)
{
	int i = 0;

	while (i <= 100)
	{
		i++;
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	_putchar('\n');
	return (0);
}
