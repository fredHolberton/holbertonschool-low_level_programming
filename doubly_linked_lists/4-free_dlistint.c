#include "lists.h"
#include <stdlib.h>

/**
 *  free_dlistint - frees a dlistint_t list.
 * @head: pointer of the head of a doubly liked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

