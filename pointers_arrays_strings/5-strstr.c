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

	if(needle)
		return (&haystack[i]);
	while (haystack[i])
	{
		int x = 0;
		int found = 1;

		if (haystack[i] == needle[x])
		{
			while (needle[x])
			{
				if (needle[x] != haystack[i + x])
				{
					found = 0;
				}
				x++;
			}
			if (found)
				return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
