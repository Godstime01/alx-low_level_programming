#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: No of Parameters
 * @argv: array of characters
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int s;

	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		s = 0;
	}
	else
	{
		printf("Error\n");
		s = 1;
	}
	return (s);
}
