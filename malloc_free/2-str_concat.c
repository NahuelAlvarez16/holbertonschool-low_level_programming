#include <stdlib.h>
#include "main.h"
/**
 * str_concat - that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: return array
 */
char *str_concat(char *s1,char *s2)
{
	char *temp;
	unsigned int i = 0;
	unsigned int x = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;


	for (; s1[size1]; size1++)
		;
	for (; s2[size2]; size2++)
		;
	temp = malloc((size1 + size2) + 1);

	if (temp == NULL)
		return (NULL);
	if (s1 != NULL)
		while (i < size1)
		{
			temp[i] = s1[i];
			i++;
		}
	if (s2 != NULL)
		while (x < size2)
		{
			temp[i] = s2[x];
			x++;
			i++;
		}
	temp[i] = '\0';
	return (temp);
}
