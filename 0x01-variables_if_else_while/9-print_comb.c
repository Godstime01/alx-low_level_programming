#include <stdio.h>

/**
 *Description: main - start function
 *
 *Return 1 failure
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i);
		if (i <  9)
		{
			putchar(','); putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
