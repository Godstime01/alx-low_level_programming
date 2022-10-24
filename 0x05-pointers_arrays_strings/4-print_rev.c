#include "main.h"
#include <stdlib.h> 
#include <string.h>
/**
 * print_rev: prints reverse of a string
 * @s: parameter
 * Return: void
 */

void print_rev(char *s)
{
	char *rev = strrev(s);
	int i = 0;

	while (rev[i] != '\0')
	{
		_putchar(rev[i]);
		i++;
	}
	_putchar('\n');
}
