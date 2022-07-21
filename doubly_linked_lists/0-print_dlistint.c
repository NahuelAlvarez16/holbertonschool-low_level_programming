#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Print all integers of a list
 * @h: List
 * Return: return number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
