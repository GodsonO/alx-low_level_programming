#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int a = 0, b = 0, c;
	char *d = str;

	while (*d != '\0')
	{
		d++;
		a++;
	}
	b = a - 1;

	for (c = 0; c <= b; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
