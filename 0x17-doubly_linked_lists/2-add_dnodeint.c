#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of
 * the dlistint_t list
 * @head: double pointer to the linked list
 * @n: value to insert in the new node
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = *head;
	*head = new_n;
	if (new_n->next != NULL)
		(new_n->next)->prev = new_n;
	return (new_n);
}
