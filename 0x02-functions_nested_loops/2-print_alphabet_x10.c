#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10 times
 */

void print_alphabet_x10(void)
{
	int counter = 1;
	char l;

	for (; counter <= 10; counter++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
