#include "main.h"
/**
 * _strcmp - Comparate two strings
 * @s1: First string
 * @s2: Second string
 * Return: Result of the comparatin
 */
int _strcmp(char *s1, char *s2)
{
	return (s1 > s2 ? *s1 : s1 == s2 ? 0 : -*s2);
}
