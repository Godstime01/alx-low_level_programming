#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - prints a string
 * @separator: string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		/* arg is a variable storing the current element in va_list */
		char *arg = va_arg(str, char *);

		if (arg != NULL)
		{
			printf("%s", arg);

			if (i < n - 1)
				printf("%c", separator);
		}
		else
		{
			printf("(nil)");
		}

	}
	putchar('\n');
	va_end(str);

}
