#include "main.h"

/**
 *_pow_recursion - a function that returns the value
 * of x raised to the power of y
 * @x: base number
 * @y: power
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	ans *= _pow_recursion(x, y - 1);

	return (ans);
}
