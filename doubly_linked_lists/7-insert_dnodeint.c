#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a new node by index in the list
 * @h: List
 * @idx: Integer
 * @n: New number in the list
 * Return: return address of node in the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new;
	dlistint_t *node = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		if (node)
		{
			node->prev = new;
			new->next = node;
		}
		*&(*head) = new;
		return (new);
	}
	while (node)
	{

		if (i == (idx - 1))
		{
			new->n = n;
			new->next = node->next;
			new->prev = node;
			node->next->prev = new;
			node->next = new;
			return (new);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
