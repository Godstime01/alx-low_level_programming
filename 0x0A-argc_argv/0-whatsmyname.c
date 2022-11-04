#include "main.h"

/**
 * main - entry point
 * @argc: number of command line arguments.
 * @argv: array of argument
 * Return: (0) - SUCCESS
 */

int main(argc, char *argv[])
{
	_putchar('.');
	_putchar('/');

	int i = 0;

	while (argv[0] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
