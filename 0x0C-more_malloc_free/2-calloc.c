#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: an array of nmemb elements of size bytes
 * @size: the size of the memory
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	b = nmemb * size;
	ptr = malloc(b);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a < b)
	{
		ptr[a] = 0;
		a++;
	}
	return (ptr);
}
