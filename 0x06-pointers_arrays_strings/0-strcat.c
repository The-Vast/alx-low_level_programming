#include "main.h"

/**
 *_strcat - a function that concatenates two strings.
 * @dest: appendee
 * @src: appendor
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;

	while (dest[i] != '\0')
	{
		count++;
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[count] = src[j];
		count++;
	}

	return (dest);
}
