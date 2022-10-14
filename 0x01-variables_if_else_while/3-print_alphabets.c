#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc, hc;
	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (hc = 'A'; hc <= 'Z'; hc++)
                putchar(hc);
	putchar('\n');

	return (0);
}
