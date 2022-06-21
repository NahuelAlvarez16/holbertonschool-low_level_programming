#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * verifyInt - verify if is digit number variable
 * @number: Number
 * Return: return 1 if is digit or 0 if isn't digit
*/
int verifyInt(char *number)
{
	int i = 0;

	for (; number[i]; i++)
		if (!isdigit(number[i]))
			return (0);
	return (1);
}
/**
 * main - adds positive numbers.
 * @argc: length of arguments
 * @argv: array of arguments
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
		if (verifyInt(argv[i]))
		{
			result += atoi(argv[i]);
			if (i == argc - 1)
				printf("%d\n", result);
		}
		else
			printf("Error\n");
	return (0);
}
