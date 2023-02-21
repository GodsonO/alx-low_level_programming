#include <stdio.h>
/**
 * main - finds amd prints the sum of the even-valued terms
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0, y = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
			sum = sum + next;
	}
	printf("%i\n", sum);
	return (0);
}
