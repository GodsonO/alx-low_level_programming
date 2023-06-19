#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int compare;

	compare = strcmp(s1, s2);
	return (compare);
}
