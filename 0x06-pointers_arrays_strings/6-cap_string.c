#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @n: the string
 * Return: a char
 */
char *cap_string(char *n)
{
	int a = 0;

	while (n[a])
	{
		while (!(n[a] >= 'a' && n[a] <= 'z'))
			a++;
		if (n[a - 1] == ' ' || n[a - 1] == '\t' || n[a - 1] == '\n' ||
			n[a - 1] == ',' || n[a - 1] == ';' || n[a - 1] == '.' ||
			n[a - 1] == '!' || n[a - 1] == '?' || n[a - 1] == '"' ||
			n[a - 1] == '(' || n[a - 1] == ')' || n[a - 1] == '{' ||
			n[a - 1] == '}' || a == 0)
		{
			n[a] -= 32;
			a++;
		}
	}
	return (n);
}	
