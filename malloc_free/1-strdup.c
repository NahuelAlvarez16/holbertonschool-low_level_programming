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
	unsigned int size = 0;

	for(; str[size]; size++)
		;

	if (str == 0 || str == NULL)
		return (NULL);
	temp = malloc(size + 1);

	if (temp == NULL)
		return (NULL);
	while (i < size)
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
