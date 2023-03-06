#include "main.h"
#include <stdio.h>
/**
 * *_strchr - a function that locates a character in a string.
 * @s: the pointer of the string
 * @c: input
 * Return: a pointer to the first occurrence of the character c
 * in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (NULL);
}
