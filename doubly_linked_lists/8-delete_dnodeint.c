#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete node by its index in the list
 * @head: List
 * @index: Integer
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head;
	dlistint_t *selected_node;

	if (index == 0 && node)
	{
		if (!*&(*head)->next)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			node->prev = NULL;
			*&(*head) = node->next;
			free(node);
		}
		return (1);
	}
	while (node)
	{

		if (i == (index - 1))
		{
			selected_node = node->next;
			node->next = selected_node->next;
			if (node->next)
				node->next->prev = node;
			free(selected_node);
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);
}
