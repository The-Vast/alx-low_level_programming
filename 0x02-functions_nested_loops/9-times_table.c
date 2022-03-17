#include "main.h"

/**
 * times_table - 9 times table
 */

void times_table(void)
{
	int num, time, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (time = 1; time <= 9; time++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * time;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
