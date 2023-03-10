#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int x, sum = 0;
	char *n;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = argv[i];

			for (x = 0; x < strlen(n); x++)
			{
				if (n[x] < 48 || n[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(n);
			n++;
		}
		printf("%d/n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
