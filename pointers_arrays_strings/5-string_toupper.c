#include "main.h"
/**
 * string_toupper - Print a string
 * @str: string
 * Return: return str in upper
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
