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
	char *temp;
	unsigned int i = 0;

	if (size > 0)
		return (NULL);
	temp = malloc(sizeof(char) * size);

	if (temp == NULL)
		return (NULL);
	while (i < size)
	{
		temp[i] = c;
		i++;
	}

	return (size && temp ? (temp) : (0));
}
