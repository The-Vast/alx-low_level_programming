#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string to be considered
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (len % 2 == 0) 
		{
			_putchar(str[len]);
		}
		len++;
	}
}
