#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Destined
 * @src: Contens
 * Return: return src variable
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
