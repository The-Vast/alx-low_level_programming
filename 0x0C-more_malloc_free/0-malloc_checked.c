#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The number of bytes to be allocated.
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *store = malloc(b);

	if (store == NULL)
		exit(98);

	return (store);
}
