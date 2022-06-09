#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks for lowercase character.
 * @c: Value with ASCII code
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
