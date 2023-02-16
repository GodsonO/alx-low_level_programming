#include <stdio.h>
/**
 * main - A C program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

printf("Size of int: %zu bytes\n", sizeof(i));
printf("Size of char: %zu bytes\n", sizeof(c));
printf("Size of long int: %zu bytes\n", sizeof(li));
printf("Size of long long int: %zu bytes\n", sizeof(lli));
printf("Size of float: %zu bytes\n", sizeof(f));
return (0);
}
