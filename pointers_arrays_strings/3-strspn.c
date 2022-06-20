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
	int count = 0;

	while (s[i])
	{
		int x = 0;

		while (accept[x] || x >= 0)
		{
			if (accept[x] == s[i])
			{
				x = -1;
			}
			else
				x++;
		}
		if (x == -1)
			count++;
		i++;
	}
	return (count);
}
