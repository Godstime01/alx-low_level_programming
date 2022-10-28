#include "main.h"

/**
 *reverse_array - print the reverse of an array
 *@a: array of n size
 *@n: size of array
 *Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
