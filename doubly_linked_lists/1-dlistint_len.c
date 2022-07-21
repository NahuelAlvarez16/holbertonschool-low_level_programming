#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Length of a list
 * @h: List
 * Return: return number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
