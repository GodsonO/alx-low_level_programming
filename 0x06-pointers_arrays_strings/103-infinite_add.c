#include "main.h"
/**
 * *infinite_add - adds two numbers.
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the buffer size
 * Return: if r can store the sum - a pointer to the result
 * if r cannot store the sum - 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_l = 0, n2_l = 0;

	for (index = 0; *(n1 + index); index++)
		n1_l++;

	for (index = 0; *(n2 + index); index++)
		n2_l++;
	if (size_r <= n1_l + 1 || size_r <= n2_l + 1)
		return (0);

	n1 += n1_l - 1;
	n2 += n2_l - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
