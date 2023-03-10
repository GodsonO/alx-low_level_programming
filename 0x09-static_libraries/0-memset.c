#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the starting address of the memory to be filled
 * @b: the constant byte
 * @n: the number of bytes to be changed
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
