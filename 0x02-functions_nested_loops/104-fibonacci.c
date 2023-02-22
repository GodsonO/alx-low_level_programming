#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0;
	long int a = 0, b = 1, ab;

	while (x < 98)
	{
		ab = a + b;
		a = b;
		b = ab;
		printf("%lu", ab);

		if (x < 96)
		{
			printf(",");
			printf(" ");
		}
		x++;
	}
	putchar('\n');
	return (0);
}
