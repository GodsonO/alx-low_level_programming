#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, n, bytes, check = 0;

	bytes = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[x])
			{
				bytes++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (bytes);
		}
	}
	return (bytes);
}
