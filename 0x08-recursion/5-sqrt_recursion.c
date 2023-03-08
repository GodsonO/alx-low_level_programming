#include "main.h"
#include <stdio.h>
int _sqrt(int n, int x);
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: an integer
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: number to calculate the square root
 * @x: iterate number
 * Return: the natural square root of a number
 */
int _sqrt(int n, int x)
{
	int square = x * x;

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));
}

