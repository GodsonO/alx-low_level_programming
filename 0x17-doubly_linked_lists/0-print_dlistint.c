#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 * Return: number of nodes on success
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node;

	for (num_node = 0; h != NULL; num_node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_node);
}
