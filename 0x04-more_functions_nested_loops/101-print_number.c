#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: the integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		n = n * -1;
		a = n;
		_putchar('-');
	}
	a = a / 10;

	if (a != 0)
	{
		print_number(a);
	}
	_putchar((unsigned int) n % 10 + '0');
}
