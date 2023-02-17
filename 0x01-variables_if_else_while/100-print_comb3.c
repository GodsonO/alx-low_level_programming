#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int c = '0';
	int d = '0';

	for (d = '0'; d <= '9'; d++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (!((c == d) || (d > c)))
			{
				putchar(d);
				putchar(c);
				if (!(c == '9' && d == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
