#include "main.h"
/**
 * _memcpy - Copies memory area.
 * @dest: destiny
 * @src: content
 * @n: variable
 * Return: return copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
