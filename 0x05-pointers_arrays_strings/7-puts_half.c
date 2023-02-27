#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int y = 0;
	int x;

	while (str[y] != '\0')
	{
		y++;
	}
	if (y % 2 == 1)
	{
		x = (y - 1) / 2;
		x += 1;
	}

	else
	{
		x = y / 2;
	}

	for (; x < y; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
