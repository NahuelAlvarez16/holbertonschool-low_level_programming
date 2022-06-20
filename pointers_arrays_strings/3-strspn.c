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
	int count = 0;

	while (s[i])
	{
		int x = 0;
		int found = 0;

		while (accept[x] && !found)
		{
			if (accept[x] == s[i])
			{
				found = 1;
			}
			x++;
		}
		if (!found)
			return (count);
		i++;
	}
	return (count);
}
