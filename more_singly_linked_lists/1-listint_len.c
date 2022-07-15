#include "lists.h"
/**
 * listint_len - Length of list
 * @h: List
 * Return: return number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
