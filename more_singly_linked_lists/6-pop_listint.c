#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Remove first node of list
 * @head: List
 * Return: return number of deleted node.
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *node;

	if (!*head)
		return (0);
	number = *&(*head)->n;
	node = *&(*head)->next;
	free(*head);
	*head = node;
	return (number);
}
