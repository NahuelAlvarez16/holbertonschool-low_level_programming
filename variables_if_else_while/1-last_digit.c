#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print if is the last digit of random number is greater than 5 or etc
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = n % 10;
	printf("Last digit of %d", n);
	printf(" is %d and ", last_digit);
	if (last_digit > 5)
		printf("is greater than 5\n");
	else if (last_digit == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");

	return (0);
}

