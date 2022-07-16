#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free all node of list
 * @head: List
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
