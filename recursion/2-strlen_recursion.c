#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: String
 * Return: return length of s variable.
 */
int _strlen_recursion(char *s)
{
	if (s[0])
		return (_strlen_recursion(&s[1]) + 1);
}
