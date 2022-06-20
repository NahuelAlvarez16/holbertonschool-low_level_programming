#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: string
 * @accept: chars accepts
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		int x = 0;

		while (accept[x])
		{
			if (accept[x] == s[i])
			{
				return (&s[i]);
			}
			x++;
		}
		i++;
	}
	return ('\0');
}
