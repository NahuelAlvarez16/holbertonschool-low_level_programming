#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Add new node in end of the list
 * @head: List
 * @n: Integer
 * Return: return address new element in the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int length = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (*head)
		head = &(*head)->next;
	*head = new;
	return (new);
}
