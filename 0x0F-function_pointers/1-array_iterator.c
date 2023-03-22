#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!array || !action)
	{
		return;
	}
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
