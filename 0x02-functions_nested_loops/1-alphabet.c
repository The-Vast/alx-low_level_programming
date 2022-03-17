#include "main.h"

/**
 ** print_alphabet - prints all alphabets
 **
 * Return: Always nada (Void)
 **/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
