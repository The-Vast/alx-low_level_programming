#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first argument to be swaped
 * @b: second argument being swapped to
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
