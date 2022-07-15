#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - Linked lists
 * @n: Integer
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
