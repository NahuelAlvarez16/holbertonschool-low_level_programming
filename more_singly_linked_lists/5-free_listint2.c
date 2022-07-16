#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free all node of list
 * @head: List
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
