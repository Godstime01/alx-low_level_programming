#include "main.h"

/**
 * _islower - checs if a character is lower case
 * @c: The character to be checked
 * Return: 1 true 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
