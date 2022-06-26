#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - that concatenates two strings.
 * @s1: First array.
 * @s2: Second array.
 * @n: Limit of second array.
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int size1 = 0, size2 = 0, i = 0, x = 0;

	for (; s1 != NULL && s1[size1]; size1++)
		;
	for (; s2 != NULL && size2 < n; size2++)
		;
	temp = malloc(size1 + size2 + 1);

	if (temp == NULL)
		return (NULL);
	for (; s1 != NULL && s1[i]; i++)
		temp[i] = s1[i];
	for (; s1 != NULL && s2[x] && x < n; i++, x++)
		temp[i] = s2[x];
	temp[i] = '\0';
	return (temp);
}
