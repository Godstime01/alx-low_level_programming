#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: array of int
 * @n: int - size of array
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d, ",a[x]); 
	}
	printf("\n");
}
