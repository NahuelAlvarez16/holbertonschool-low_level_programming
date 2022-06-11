#include "main.h"
/**
 * _isupper - Checks for upper character.
 * @c: Value with ASCII code
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
