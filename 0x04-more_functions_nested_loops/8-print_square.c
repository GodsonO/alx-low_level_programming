#include "main.h"
/**
 * print_square - prints a square
 * @size: the number of squares
 * Return: void
 */
void print_square(int size)
{
	int x = 0, y;

	while (x < size && size > 0)
	{
		y = 0;

		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
