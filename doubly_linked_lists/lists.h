#ifndef __include_fichier_h__
#define __include_fichier_h__

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* task: 0. Print list */
size_t print_dlistint(const dlistint_t *h);

/* task: 1. List length */
size_t dlistint_len(const dlistint_t *h);

/* task: 2. Add node */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* task: 3. Add node at the end */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* task: 4. Free list */
void free_dlistint(dlistint_t *head);

/* task: 5. Get node at index */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* task: 6. Sum list */
int sum_dlistint(dlistint_t *head);

/* task: 7. Insert at index */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* task: 8. Delete at index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);


#endif /* #ifndef __include_fichier_h__ */

