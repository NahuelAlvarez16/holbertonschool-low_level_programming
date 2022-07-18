#include "main.h"
#include <string.h>
/**
 * binary_to_uint - Binary to Decimal number.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i = 0, power = 1;

	if (!b)
		return (0);
	i = strlen(b) - 1;
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			result += power;
		else if (b[i] != '0')
			return (0);
		power *= 2;
	}
	return (result);
}
