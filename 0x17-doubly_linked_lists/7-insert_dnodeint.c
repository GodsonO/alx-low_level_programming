#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the linked list
 * @idx: the index of the list where the new node should be added
 * @n: data to insert into new node
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_n;
	dlistint_t *tmp = *h;

	new_n = malloc(sizeof(dlistint_t));
	if (!new_n || !h)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new_n->next = tmp->next;
			new_n->prev = tmp;
			tmp->next->prev = new_n;
			tmp->next = new_n;
			return (new_n);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
