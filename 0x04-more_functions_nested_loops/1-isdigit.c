#include "main.h"

/**
 *_isdigit - Checks for digits between 0 and 9
 * @c: the integer to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
