#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int x;
	char lower_alpha;

	for (x = 0; x <= 9; x++)
	{
		for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
			_putchar(lower_alpha);
		_putchar('\n');
	}
}
