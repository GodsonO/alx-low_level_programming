#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b = 1;
	unsigned long int c = 2;
	unsigned long int l = 1000000000;
	unsigned long int d;
	unsigned long int e;
	unsigned long int f;
	unsigned long int g;

	printf("%lu", b);
	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c += b;
		b = c - b;
	}
	d = (b / 1);
	e = (b % 1);
	f = (c / 1);
	g = (c % 1);

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", f + (g / 1));
		printf("%lu", g % 1);
		f = f + d;
		d = f - d;
		g = g + e;
		e = g - e;
	}
	printf("\n");
	return (0);
}
