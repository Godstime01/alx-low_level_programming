#include <stdio.h>

/**
 * main - Entry point for the program
 * @argc: number of argument
 * @argv: array of arguments
 * Return: (0) - success
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
