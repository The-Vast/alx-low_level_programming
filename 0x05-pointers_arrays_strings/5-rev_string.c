#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i, j;
	char *ch, temp;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	ch = s;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = 1 + i; j > 0; j--)
		{
			temp = *(ch + j);
			*(ch + j) = *(ch + (j - 1));
			*(ch + (j - 1)) = temp;
		}
	}
}
