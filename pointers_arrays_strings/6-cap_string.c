#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: string
 * Return: return str
 */
char *cap_string(char *str)
{
	int i = 0;
	char sep[] = "\n\t ,;.!?\"(){}";

	while (*(str + i))
	{
		int x = 0;

		for (; sep[x] && x >= 0; x++)
			if ((i == 0 || str[i - 1] == sep[x]) && str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				x = -1;
			}
		i++;
	}
	return (str);
}
