#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: times table
 * Return:void
 */
void print_times_table(int n)
{
	int x = 0, rep, y;

	if (n < 0 || n > 15)
		return;

	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			rep = x * y;
			if (y == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
		}
		_putchar('\n');
		x++;
	}
}
