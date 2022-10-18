#include <stdio.h>

/**
 * main - program to prints -_putchar
 * Return: 0 success
 */

int main(void)
{
	char text[10] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n', '\0' };
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(text[i]);
	}
	return (0);
}
