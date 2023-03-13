#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - a function that concatenates all
 * the arguments of your program
 * @ac: an integer
 * @av: a string
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s, *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			ch++;
		ch++;
	}
	str = (char *) malloc(sizeof(char) * (ch + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < ch; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j] = '\n';
	}
	str[j] = '\0';
	return (str);
}
