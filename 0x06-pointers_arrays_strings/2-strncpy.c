#include "main.h"
#include <string.h>
/**
 * *_strncpy - that copies a string
 * @dest: the string
 * @src: the string
 * @n: the integer
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
