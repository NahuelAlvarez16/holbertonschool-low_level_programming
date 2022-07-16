#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Find a node by its index in the list
 * @head: List
 * @index: Integer
 * Return: return address of node in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
