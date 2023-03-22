#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search in
 * @cmp: pointer to the comparing function
 * @size: size of the array
 * Return: the index of the first element for which the cmp
 * function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
			{
				return (n);
			}
		}
	}
	return (-1);
}
