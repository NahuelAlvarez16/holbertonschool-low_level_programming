#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Add new node in the list
 * @head: List
 * @str: String
 * Return: return address new element in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;
	list_t *new;
	list_t *last_node = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (; str && str[length]; length++)
		;

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new;
	return (last_node);
}
