#include "variadic_functions.h"
#include <stdio.h>
#include <stargs.h>

/**
 * print_all - prints all strings
 *
 * @format: params
 *
 */

void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j, k = 0;
	char *s;
	const char args[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;

		while (args[j])
		{
			if (format[i] == args[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), k = 1;
			case 's':
				s = va_arg(valist, char *), k = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n"), va_end(all);
}
