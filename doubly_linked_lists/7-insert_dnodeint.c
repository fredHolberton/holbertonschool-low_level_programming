#include "lists.h"
#include <stdlib.h>

/**
 *  insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer of the head of a doubly liked list
 * @idx: index of the node, starting from 0
 * @n: Value of the data of the new node to insert
 *
 * Return: The new node that is inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i;

	if (*h == NULL and idx != 0)
		return (NULL);

	for (i = 1; i <= idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev = new;

	return (new);
}

