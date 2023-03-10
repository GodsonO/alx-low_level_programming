#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: the memory that the n bytes is being stored
 * @src: the memory that the n byte is being copied from
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
