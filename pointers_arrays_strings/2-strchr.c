#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: start string since c
 * Return: result
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] && s[i] != c; i++);
	return (s[i] == c ? &s[i] : '\0');
}
