#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: chars accepts
 * Return: length
 */
unsigned int *_strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int count = 0;

	while (s[i])
	{
		int x = 0;
		int found = 0;

		while (accept[x])
		{
			if (accept[x] == s[i])
			{
				found++;
				break;
			}
			else
				x++;
		}
		if (!found)
			count++;
		i++;
	}
	return (count);
}
