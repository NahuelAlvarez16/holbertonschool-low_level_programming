#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip to get from
 * one number to another.
 * @n: Is a number
 * @m: Is a second number
 * Return: bits you would need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0;
	int i = 0;

	for (; i < 64; i++)
		if (((n >> i) & 1) != ((m >> i) & 1))
			result++;
	return (result);
}
