#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: string
 * Return: return str
 */
char *leet(char *str)
{
	int i = 0;
	char letters[] = "AEOTL";
	char numbers[] = "43071"

	while (*(str + i))
	{
		int x = 0;

		for (; letters[x] && x >= 0; x++)
			if (str[i] == letters[x] || str[i] == letters[x] - 32)
			{
				str[i] = numbers[x];
				x = -1;
			}
		i++;
	}
	return (str);
}
