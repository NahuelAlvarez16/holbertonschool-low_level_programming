#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: return array
 */
char *create_array(unsigned int size, char c)
{
	char *temp = malloc(sizeof(char) * size);
	int i = 0;

	while (i < size)
	{
		temp[i] = c;
		i++;
	}

	return (size ? (temp) : (0));
}
