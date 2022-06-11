#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks for lowercase character.
 * @c: Value with ASCII code
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (islower(c))
		return (0);
	return (1);
}
