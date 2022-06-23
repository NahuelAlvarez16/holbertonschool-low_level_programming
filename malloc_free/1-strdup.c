#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -pointer to a newly allocated space in memory
 * @str: string
 * Return: return array
 */
char *_strdup(char *str)
{
	char *temp;
	unsigned int i = 0;

	if (str)
		return (NULL);
	temp = malloc(sizeof(char) * sizeof(str));

	if (temp == NULL)
		return (NULL);
	while (i < sizeof(str) + 2)
	{
		temp[i] = str[i];
		i++;
	}

	return (temp);
}
