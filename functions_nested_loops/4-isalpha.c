#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks for lowercase character.
 * @c: Value with ASCII code
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
