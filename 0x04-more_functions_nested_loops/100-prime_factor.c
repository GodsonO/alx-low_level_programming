#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long x, lpf, num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			lpf = num / x;
		}
	}
	printf("%ld\n", lpf);
	return (0);
}
