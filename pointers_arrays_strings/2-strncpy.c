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

	while (src[i] && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if(!src[i])
	*(dest + i) = 0;
	return (dest);
}
