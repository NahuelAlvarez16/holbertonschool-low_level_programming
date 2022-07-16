#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node by index in the list
 * @head: List
 * @idx: Integer
 * @n: New number in the list
 * Return: return address of node in the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *node = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	while (node)
	{

		if (i == (idx - 1))
		{
			new->n = n;
			new->next = node->next;
			node->next = new;
			return (new);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
