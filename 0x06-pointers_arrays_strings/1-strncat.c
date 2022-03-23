#include "main.h"

/**
 *_strncat - function that concatenates two strings.
 * @dest: conatination destination
 * @src: concatination source
 * @n: max byte from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
