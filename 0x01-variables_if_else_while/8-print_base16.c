#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	char lowercase_alpha;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	for (lowercase_alpha = 'a'; lowercase_alpha <= 'f'; lowercase_alpha++)
		putchar(lowercase_alpha);

	putchar('\n');

	return (0);
}
