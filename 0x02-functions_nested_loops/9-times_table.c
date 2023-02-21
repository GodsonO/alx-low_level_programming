#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int x = 0;
	int y;
	int total;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			total = x * y;
			if (y == 0)
			{
				_putchar('0' + total);
			}
			else if (total < 10)
			{
				_putchar(' ');
				_putchar('0' + total);
			}
			else
			{
				_putchar('0' + total / 10);
				_putchar('0' + total % 10);
			}

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}

