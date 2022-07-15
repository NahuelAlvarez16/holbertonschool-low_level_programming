#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - free all node of list
 * @head: List
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head);
	}
}
