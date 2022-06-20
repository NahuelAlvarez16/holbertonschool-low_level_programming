#include "main.h"
/**
 * _pow_recursion - the value of x raised to the power of y.
 * @x: Number
 * @y: Number
 * Return: returns the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	return (y > 0 ? (_pow_recursion(x, y - 1) * x) : 1);
}
