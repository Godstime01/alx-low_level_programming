#include <stdio.h>
/**
 * main - entry point
 * @argc: number of command line arguments.
 * @argv: array of argument
 * Return: (0) - SUCCESS
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	(void)argv[0];

	printf("%s\n", argv[0]);
	return (0);
}
