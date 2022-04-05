#include "main.h"

/**
 *_memcpy - function that copies memory area.
* @n: number of bytes to be copied
* @src: source to be copiied from
* @dest: copy destination
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	for (; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
