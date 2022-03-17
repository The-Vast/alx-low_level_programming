#include <stdio.h>

/**
 * main - where all the codes reside
 * Return: always 0 (Success)
 *
 */

int main(void)
{
	int count;
	unsigned long num1, num2, sum;
	unsigned long half1_num1, half2_num1, half1_num2, half2_num2;
	unsigned long half1, half2;

	for (count = 0; count < 91; count++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);

		num1 = num2;
		num2 = sum;
	}

	half1_num1 = num1 / 1000000000;
	half1_num2 = num2 / 1000000000;
	half2_num1 = num1 % 1000000000;
	half2_num2 = num2 % 1000000000;

	for (count = 92; count < 99; count++)
	{
		half1 = half1_num1 + half1_num2;
		half2 = half2_num1 + half2_num2;
		if (half2_num1 + half2_num2 > 99999999)
		{
			half1 += 1;
			half2 %= 1000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		half1_num1 = half1_num2;
		half2_num1 = half2_num2;
		half1_num2 = half1;
		half2_num2 = half2;
	}
	printf("\n");
	return (0);
}
