#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates passwords for the crackme5.
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass_word[7], *code;
	int length = strlen(argv[1]), i, tmp;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	tmp = (length ^ 59) & 63;
	pass_word[0] = code[tmp];
	tmp = 0;
	for (i = 0; i < length; i++)
		tmp += argv[1][i];

	pass_word[1] = code[(tmp ^ 79) & 63];
	tmp = 1;
	for (i = 0; i < length; i++)
		tmp *= argv[1][i];

	pass_word[2] = code[(tmp ^ 85) & 63];
	tmp = 0;
	for (i = 0; i < length; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	pass_word[3] = code[rand() & 63];
	tmp = 0;
	for (i = 0; i < length; i++)
		tmp += (argv[1][i] * argv[1][i]);

	pass_word[4] = code[(tmp ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();

	pass_word[5] = code[(tmp ^ 229) & 63];
	pass_word[6] = '\0';
	printf("%s", pass_word);
	return (0);
}
