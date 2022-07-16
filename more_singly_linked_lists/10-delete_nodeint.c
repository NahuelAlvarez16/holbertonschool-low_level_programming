#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node by its index in the list
 * @head: List
 * @index: Integer
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *selected_node;

	if (index == 0 && node)
	{
		if (!*&(*head)->next)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
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
			free(selected_node);
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);
}
