#include "main.h"
#include <stdlib.h>
int get_str_len(char *str);
/**
 * get_str_len - gets the length of string
 * @str: the string
 * Return: integer value of the string
 */
int get_str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i + 1);
}
/**
 * *str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: contents of s1, followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int j, i, s1_size, s2_size;
	char *p;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	s1_size = get_str_len(s1);
	s2_size = get_str_len(s2);
	p = (char *) malloc(sizeof(char) * ((s1_size + s2_size) - 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
