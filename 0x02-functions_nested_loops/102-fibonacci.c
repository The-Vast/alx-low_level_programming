#include <stdio.h>

/**
 * main - action house
 * Return: 0 always
 */

int main(void)
{
	int num, num1 = 0, num2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = num1 + num2;
		printf("%d", sum);

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
