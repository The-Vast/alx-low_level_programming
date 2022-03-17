#include "main.h"

/**
 * print_sign - function that prints sign
 * n: integer to be checked
 * Return: n > 0; 1 is returned,
 * 	n = 0 ; 0 is returned,
 * 	n < 0; -1 is returned
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

