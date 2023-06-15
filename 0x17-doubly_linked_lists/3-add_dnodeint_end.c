#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the linked list
 * @n: value to insert in the new node
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n, *tmp;

	tmp = *head;
	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_n;
	new_n->prev = tmp;
	return (new_n);
}
