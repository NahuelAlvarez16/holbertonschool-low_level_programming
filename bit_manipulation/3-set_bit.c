#include "main.h"
/**
 * set_bit - That sets the value of a bit to 1 at a given index.
 * @n: Is a number
 * @index: is the index, starting form 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int power = 1;
	unsigned int i = 0;

	if (index > 64)
		return (-1);
	for (; i < index; i++)
		power *= 2;
	if (!((*n >> index) & 1))
		*n += power;
	return (1);
}
