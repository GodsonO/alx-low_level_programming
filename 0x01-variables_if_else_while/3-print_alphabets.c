#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase, and then in uppercse
 * Return: 0 (Success)
 */
int main(void)
{
	char c, d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
