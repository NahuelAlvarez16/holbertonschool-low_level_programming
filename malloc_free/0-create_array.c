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
	if (size > 0)
		return (NULL);
	char *temp = malloc(sizeof(char) * (size));
	unsigned int i = 0;

	if (temp == NULL)
		return (NULL);
	while (i < size)
	{
		temp[i] = c;
		i++;
	}

	return (size && temp ? (temp) : (0));
}
