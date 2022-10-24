#include "main.h"
#include <stdlib.h>
/**
 * _puts: prints a string
 * @str: string parameter 
 * Return: void
 */

void _puts(char *str)
{
	int i; 

	for (i = 0; i <= strlen(str); i++)
		putchar(i);
}
