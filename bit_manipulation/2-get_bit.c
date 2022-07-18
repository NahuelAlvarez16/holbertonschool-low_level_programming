#include "main.h"
/**
 * get_bit - The value of a bit at a given index
 * @n: Is a number
 * @index: is the index, starting form 0
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
