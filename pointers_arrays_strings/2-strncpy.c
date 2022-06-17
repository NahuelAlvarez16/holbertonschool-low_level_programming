#include "main.h"
/**
 * _strncpy - Copies the string pointed to by src
 * @dest: Destined
 * @src: Contens
 * @n: Limit
 * Return: return src variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[length])
		length++;

	while (src[i] && i < n)
	{
		*(dest + length) = *(src + i);
		i++;
		length++;
	}
	*(dest + length) = '\0';
	return (dest);
}
