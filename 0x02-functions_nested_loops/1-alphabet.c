#include "main.h"

/**
 ** main - check the code
 **
 * Return: Always 0.
 **/
int print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
