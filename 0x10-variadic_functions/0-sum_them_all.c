#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function to return the sum of n numbers
 * @n: an integer
 * Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);


	return (sum);
}
