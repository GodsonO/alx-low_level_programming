#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: the number
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	int ld = x % 10;

	ld = ld < 0 ? -1 * ld : ld;
	_putchar(ld + '0');

	return (ld < 0 ? -1 * ld : ld);
}
