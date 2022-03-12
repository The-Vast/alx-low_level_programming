#include <stdio.h>

/**
 * main - all the codes reside here
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' || ch != 'q')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
