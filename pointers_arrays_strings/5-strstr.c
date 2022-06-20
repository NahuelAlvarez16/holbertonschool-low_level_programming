#include "main.h"
/**
 * _strstr - Locates a substring..
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i])
	{
		int x = 0;

		while (needle[x])
		{
			if (needle[x] == haystack[i])
			{
				return (&haystack[i]);
			}
			x++;
		}
		i++;
	}
	return ('\0');
}
