#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int x = 0, y;

	while (x < n && n > 0)
	{
		y = 0;

		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
