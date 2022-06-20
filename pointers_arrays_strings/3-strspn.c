#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: chars accepts
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		int x = 0;
		int found = 0;

		while (accept[x])
		{
			if (accept[x] == s[i])
			{
				found = 1;
			}
			x++;
		}
		if (!found)
			return (i);
		i++;
	}
	return (i);
}
