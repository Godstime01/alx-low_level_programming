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
	int s, i, a, sum;

	sum = 0;

	if (argc <= 0)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		a = *argv[i];
		if (a >= 48 && a <= 57)
		{
			sum += atoi(argv[i]);
			if (i == argc - 1)
			{
				printf("%d\n", sum);
			       	s = 0;
			}
			else
			{
				continue;
			}
		}
		else
		{
			printf("Error\n");
			s = 1;
			break;
		}
	}
	return (s);
}
