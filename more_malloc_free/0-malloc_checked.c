#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - that allocates memory using malloc.
 * @b: size
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	char *temp;

	temp = malloc(b);

	if (temp == NULL)
		exit(98);

	return (temp);
}
