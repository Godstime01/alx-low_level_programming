#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _puts - prints a string
 * @str: string parameter
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	do {
		_putchar(str[i]);
		i++;
	} while (str[i] != '\0');
	_putchar("\n");
}
