#include "main.h"
/**
 * _strlen - lenght of a string
 * @s: string
 * Return: return lenght of a s variable
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght))
		lenght++;
	return (lenght);
}
