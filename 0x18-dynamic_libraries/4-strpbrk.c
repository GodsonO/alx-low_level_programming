#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the first string
 * @accept: the second string
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, n;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[x] == accept[n])
			{
				return (s + x);
			}
		}
	}
	return (NULL);
}
