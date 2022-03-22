#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @n: number of elements of the array to be printed
 * @a:main array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n -1)
			printf(", ");
		i++;
	}
	_putchar('\n');
}
