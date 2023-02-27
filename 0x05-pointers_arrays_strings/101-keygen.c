#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords for the
 * program 101-crackme
 * Return: 0 (Success)
 */
int main(void)
{
	char password[84];
	int  index = 0, sum = 0, d_h1, d_h2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		d_h1 = (sum - 2772) / 2;
		d_h2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			d_h1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + d_h1))
			{
				password[index] -= d_h1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + d_h2))
			{
				password[index] -= d_h2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
