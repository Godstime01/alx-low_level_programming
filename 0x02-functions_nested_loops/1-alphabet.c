#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0 success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
