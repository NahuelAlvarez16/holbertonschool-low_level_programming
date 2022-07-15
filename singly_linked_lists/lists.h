#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - Linked lists
 * @str: String
 * @len: Length of @str
 * @next: Next Node of list
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
#endif
