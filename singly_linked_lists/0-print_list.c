#include "lists.h"
#include <stdio.h>
/**
 * print_list - Print all character of a list
 * @h: List
 * Return: return number of nodes.
 */
size_t print_list(const list_t *h)
{
	int length = 0;

	while (h)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		length++;
		h = h->next;
	}
	return (length);
}
