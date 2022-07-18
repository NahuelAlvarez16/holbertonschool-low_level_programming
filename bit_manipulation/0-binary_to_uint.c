#include "main.h"
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - Binary to Decimal number.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i, x = 0;

	i = strlen(b);
	for (; i >= 0; i--, x++)
		if (b[i] == '1')
			result += pow(2, i);
	return (result);
}
