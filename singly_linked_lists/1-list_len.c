#include "lists.h"
#include <stdio.h>
/**
 * list_len - Length of elements in a linked
 * @h: List
 * Return: return number of nodes.
 */
size_t list_len(const list_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
