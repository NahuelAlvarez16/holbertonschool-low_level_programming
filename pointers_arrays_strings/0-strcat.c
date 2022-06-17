#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Destined
 * @src: Contens
 * Return: return src variable
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (*(dest + length))
		length++;

	while (*(src + i))
	{
		*(dest + length) = *(src + i);
		length++;
		i++;
	}
	*(dest + length) = '\0';
	return (dest);
}
