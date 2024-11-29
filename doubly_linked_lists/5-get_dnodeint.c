#include "lists.h"
#include <stdlib.h>

/**
 *  get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer of the head of a doubly liked list
 * @index: index of the node, starting from 0
 *
 * Return: The index eme node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	int i;

	if (head == NULL || index >= dlistint_len(head))
		return (NULL);

	for (i = 1; i <= index; i++)
		temp = temp->next;

	return (temp);
}

