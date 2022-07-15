#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Add new node in end of the list
 * @head: List
 * @str: String
 * Return: return address new element in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (; str && str[length]; length++)
		;

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;
	while (*head)
		head = &(*head)->next;
	*head = new;
	return (new);
}
