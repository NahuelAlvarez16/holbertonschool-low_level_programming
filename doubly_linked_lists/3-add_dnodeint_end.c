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
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	while (aux && aux->next)
		aux = aux->next;
	if (*head)
	{
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
