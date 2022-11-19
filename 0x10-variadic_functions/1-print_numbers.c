#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that accepts unlimited parameters
 * and print those numbers
 * @separator: string
 * @n: int
 * Return: void
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n'), va_args(numbers);
}
