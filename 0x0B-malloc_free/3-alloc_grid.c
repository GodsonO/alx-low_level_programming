#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: array row size
 * @height: array column size
 * Return: a pointer to a 2 dimensional array of integers
 * return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **) malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (; i >= 0; i++)
			{
				free(p[i]);
				return (NULL);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
