#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - Linked lists
 * @str: String
 * @len: Length of @str
 * @next: Next Node of list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
int _putchar(char c);
size_t print_listint(const listint_t *h);
#endif
