#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Add new node in end of the list
 * @head: List
 * @n: Integer
 * Return: return address new element in the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	while (*head && &(*head)->next)
		head = &(*head)->next;
	if (*head)
		*&(*head)->next = new;
	new->prev = *head;
	*head = new;
	return (new);
}
