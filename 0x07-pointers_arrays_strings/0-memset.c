#include "main.h"

/**
 *_memset - function that fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	/*unsigned char *memory = s, value = b;*/

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
