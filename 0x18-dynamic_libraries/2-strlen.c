#include "main.h"

/**
 *_strlen - function that returns the length of a string
 * @s: string to measured
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
