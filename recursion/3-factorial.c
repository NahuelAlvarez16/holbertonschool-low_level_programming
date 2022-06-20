#include "main.h"
/**
 * factorial - the factorial of a given number.
 * @n: Number
 * Return: return the factorial of a given number.
 */
int factorial(int n)
{
	return (n > 0 ? (factorial(n - 1) * n) : n == 0 ? 1 : -1);
}
