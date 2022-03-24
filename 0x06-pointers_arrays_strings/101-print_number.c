#include "maiin.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		_putchar(num / 10);

	_putchar((num % 10) + '0');
}
