#include "main.h"
#include <string.h>

/**
 * *string_toupper - convert lowercase to uppercase
 * @str: string
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ' || str[i] == '\n')
			continue;
		if (str[i] >= 97 && str[i] =< 122)
			str[i] -=  32;
	}
	return (str);
}

