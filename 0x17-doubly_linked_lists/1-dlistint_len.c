#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * linked dlistint_t list
 * @h: pointer to the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t _num;

	for (_num = 0; h != NULL; _num++)
		h = h->next;
	return (_num);
}
