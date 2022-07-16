#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Sum of all the data of the list
 * @head: List
 * Return: return sum of all data
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
