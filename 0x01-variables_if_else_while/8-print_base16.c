#include <stdio.h>

/**
 *  main - start
 *
 *  Return: 1 (failure)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (j = 97; j < 103; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

