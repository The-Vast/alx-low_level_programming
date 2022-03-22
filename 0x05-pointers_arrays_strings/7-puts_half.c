#include "main.h"

/**
 * puts_half - unction that prints half of a string
 * @str:  string to be halfed
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = (len + 1) / 2; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
