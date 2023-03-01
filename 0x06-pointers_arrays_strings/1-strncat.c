#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: integer
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
