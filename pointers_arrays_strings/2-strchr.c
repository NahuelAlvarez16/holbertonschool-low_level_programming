#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: start string since c
 * Return: result
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int x = 0;
	char *result;

	while (s[i])
	{
		if (s[i] == c || x)
		{
			*result[x] = s[i];
			x++;
		}
		i++;
	}
	return (result);
}
