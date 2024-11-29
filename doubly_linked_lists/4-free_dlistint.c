#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - frees a dlistint_t list.
 * @head: pointer of the head of a doubly liked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

