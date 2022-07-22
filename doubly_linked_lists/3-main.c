#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	    dlistint_t *head;

	        head = NULL;
		    add_dnodeint_end(&head, 0);
						    print_dlistint(head);
						        return (EXIT_SUCCESS);
}
