#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @str: string
 * Return: str
 *
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++;)
	{
		int str[i] -= 32;
	}
	return (str);
}

