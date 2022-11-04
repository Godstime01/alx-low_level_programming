#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: numbers of parameter
 * @argv: array  [48 – 57]
 * Return: (0)
 *
 */

int main(int argc, char *argv[])
{
	int s, i, sum;

	sum = 0;

	if (argc <= 0)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{
		if (!(argv[i] >= 48 && argv[i]<= 57))
		{
			printf("Error\n");
			s = 1;
		}
		else
		{
			printf("%d\n", sum += argv[i]);
			s = 0;
		}
	}
	return (0);
}
