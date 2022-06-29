#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - calculate
 * @argc: length of args
 * @argv: array of args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int first = atoi(argv[1]);
		int second = atoi(argv[3]);

		if (!second && (argv[2] == "%" || argv[2] == "/"))
		{
			printf("Error\n");
			exit(100);
		}
		int (*temp)(int, int) = get_op_func(argv[2]);

		if (!temp)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", (temp(first, second)));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
