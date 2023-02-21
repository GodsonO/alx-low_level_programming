#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3
 * or 5 below 1024 (excluded)
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0, sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%i\n", sum);
	return (0);
}
