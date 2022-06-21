#include "main.h"
/**
 * _sqrt_recursion_int - the natural square root of a number.
 * @n: Number
 * @i: Iterator
 * Return: the natural square root of a number.
 */
int _sqrt_recursion_int(int n, int i)
{
	return (n > i ? (i * i == n) ? (i) :
		_sqrt_recursion_int(n, i + 1) : (-1));
}

/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: Number
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_int(n, 1));
}
