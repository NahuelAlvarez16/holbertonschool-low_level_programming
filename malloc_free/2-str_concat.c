#include <stdlib.h>
#include "main.h"
/**
 * _str_concat - that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: return array
 */
char *_str_concat(char *s1, *s2)
{
	char *temp;
	unsigned int i = 0;
	unsigned int x = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (str == NULL)
		return (NULL);

	for (; s1[size1]; size1++)
		;
	for (; s2[size2]; size2++)
		;
	temp = malloc(size + 1);

	if (temp == NULL)
		return (NULL);
	while (i < size1)
	{
		temp[i] = s1[i];
		i++;
	}
	while (x < size2)
	{
		temp[i] = s2[x];
		x++;
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
