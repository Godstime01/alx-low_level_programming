#include <stdio.h>

/**
 *Description : main - start
 *
 *Return 1 failure
 */

int main(void)
{
	for (char i = 0; i < 10; i++)
		putchar(i);
	for (int j = 97; j < 103; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

