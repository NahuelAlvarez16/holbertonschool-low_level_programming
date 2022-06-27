#include <stdlib.h>
#include "main.h"
/**
 * _calloc - that allocates memory for an array, using malloc.
 * @nmemb: elements of size bytes
 * @size: Size
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;
	unsigned int i = 0;
	unsigned int total = (nmemb * size);

	if (!total)
		return (NULL);

	temp = malloc(total);

	if (temp == NULL)
		exit(98);
	while (i < total)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
