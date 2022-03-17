#include "main.h"

/**
 * print_alphabetx10 - it prints all alpha 10 times
 * Return - nada
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num = 0;

	while (num < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		num++;
	}
}
