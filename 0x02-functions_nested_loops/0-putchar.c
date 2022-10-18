#include <stdio.h>
#include "main.h"
/**
 * main - program to prints -_putchar
 * Return: 0 success
 */

int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');
	return (0);
}
