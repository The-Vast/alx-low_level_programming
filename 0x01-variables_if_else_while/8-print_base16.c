#include <stdio.h>

/**
 * main - it happens here
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
			putchar(i + '0');
		else
		{
			putchar(ch);
			ch++;
		};
		i++;
	};
	putchar('\n');

	return (0);
}
