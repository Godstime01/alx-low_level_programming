#include <stdio.h>

/**
 * main - Start point
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		for (j = ++i; j <= 9; j++)
		{
			putchar(j);
			for (k = ++j; k <= 9; k++)
			{
				putchar(k);
				if (k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
