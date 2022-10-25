#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: char to print
 * Return: void
 */
void puts2(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str) ; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
