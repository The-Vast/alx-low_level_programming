#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: last parameter of the function
 * @...: elipsis that shows more parameter can be passed
 * Return: 0, If n == 0
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list nums;
    unsigned int index, sum = 0;

    va_start(nums, n);

    for (index = 0; index < n; index++)
        sum += var_arg(nums, int);

    va_end(nums);

    return (sum);
}