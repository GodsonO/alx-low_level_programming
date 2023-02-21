#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets
 */

void print_alphabet(void)
{
	char lower_alpha;

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		_putchar(lower_alpha);
	}
	_putchar('\n');
}
