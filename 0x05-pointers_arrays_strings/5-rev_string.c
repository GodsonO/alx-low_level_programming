#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int c = 0, x;

	while (s[c] != '\0')
		c++;
	for (x = 0; x < c; x++)
	{
		c--;
		rev = s[x];
		s[x] = s[c];
		s[c] = rev;
	}
}
