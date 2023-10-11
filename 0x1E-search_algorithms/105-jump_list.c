#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 * @list: A pointer to the  head of the linked list to search.
 * @size: size of the array
 * @value: value to search in
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, x, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	x = 0;

	do {
		prev = list;
		x++;
		index = x * m;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
