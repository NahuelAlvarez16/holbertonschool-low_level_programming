#include "main.h"
/**
 * get_bit - The value of a bit at a given index
 * @n: Is a number
 * @index: is the index, starting form 0
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index > 64 ? -1 : (n >> index) & 1);
}
