#include <stdio.h>
/**
 * main - prints alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char reverse_alpha;

	for (reverse_alpha = 'z'; reverse_alpha >= 'a'; reverse_alpha--)
		putchar(reverse_alpha);

	putchar('\n');

	return (0);
}
