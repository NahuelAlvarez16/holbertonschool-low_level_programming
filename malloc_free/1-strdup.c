#include <string.h>
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
	unsigned int size = strlen(str);

	if (!size)
		return (NULL);
	temp = malloc(size + 1);

	if (temp == NULL)
		return (NULL);
	while (i < length)
	{
		temp[i] = str[i];
		i++;
	}

	return (temp);
}
