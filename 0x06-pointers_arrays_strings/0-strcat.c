#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int i = 0;

	while (dest[x])
		x++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x] = src[i];
		x += 1;
	}
	dest[x] = '\0';
	return (dest);
}
