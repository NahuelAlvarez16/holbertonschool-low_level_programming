#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: Destined
 * @src: Contens
 * @n: Limit
 * Return: return src variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (*(dest + length))
		length++;

	while (*(src + i) && n > i)
	{
		*(dest + length) = *(src + i);
		length++;
		i++;
	}
	*(dest + length) = '\0';
	return (dest);
}
