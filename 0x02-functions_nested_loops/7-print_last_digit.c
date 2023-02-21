#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @ld: the number
 * Return: the value of the last digit
 */
int print_last_digit(int ld)
{
	int x;

	if (ld < 0)
		ld = -ld;
	x = ld % 10;
	_putchar(x + '0');
	return (x);
}
