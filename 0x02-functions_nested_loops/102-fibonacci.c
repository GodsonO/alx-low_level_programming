#include <stdio.h>
/**
 * main - main block
 * Description: prints 50 Fibonaci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int x = 0;
	long int a = 0, b = 1, ab;

	while (x < 50)
	{
		ab = a + b;
		a = b;
		b = ab;
		printf("%lu", ab);

		if (x < 49)
		{
			printf(",");
		}
		x++;
	}
	putchar('\n');
	return (0);
}
