#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Add new node in the list
 * @head: List
 * @n: Integer
 * Return: return address new element in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
