#include "main.h"
/**
 * _isdigit - Checks if is a number.
 * @c: Value with ASCII code
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
