#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: the string
 * Return: On success, the _strdup function returns a pointer
 * to the duplicated string
 * Returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *p;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	p = (char *) malloc((sizeof(char)) * (size + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
