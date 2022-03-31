#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: given number, to be factorialed
 *
 * Return: If n is lower than 0, the function should return -1 to indicate an error
 * 0 if n is 1, and return the integer factorial for > 1
 */
int factorial(int n)
{
	int ans = n;

	if (n >= 0 && n <= 1)
		return (1);
	else if (n < 0)
		return (-1);
	
	ans *= factorial(n - 1);

	return (ans);
}
