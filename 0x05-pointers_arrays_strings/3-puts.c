#include "main.h"
#include <string.h>

/**
 * _puts - prints a string
 * @str: string parameter 
 * Return: void
 */

void _puts(char *str)
{
	int i; 

	for (i = 0; i <= strlen(str); i++)
		_putchar(str(i));
}
