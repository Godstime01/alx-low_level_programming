#include "main.h"
#include <stdlib>
#include <string.h>
/**
 * main - Entry point
 * @argc: No of Parameters
 * @argv: array of characters
 * Return: (0)
 */

int main(argc, char *argv[])
{
	int mul = 0;

	if (strlen(argv) > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		_putchar(mul);
		_putchar('\n');
	}
	else{
		char s[] = "Error";

		while (s != '\0')
			_putchar(s);
		_putchar('\n');
	}
	return (0);
}
