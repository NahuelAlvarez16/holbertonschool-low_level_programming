#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
		if (isdigit(*argv[i]))
		{
			result += atoi(argv[i]);
			if (i == argc - 1)
				printf("%d\n", result);
		}
		else
			printf("Error\n");
	return (0);
}
