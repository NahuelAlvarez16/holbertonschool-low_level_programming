#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Find a node by its index in the list
 * @head: List
 * @index: Integer
 * Return: return address of node in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
