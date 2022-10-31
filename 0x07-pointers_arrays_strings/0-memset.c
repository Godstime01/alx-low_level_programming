#include "main.h"

/**
 * _memset - fills memory with a constant byte (n)
 *
 * @s: string
 * @b: constant b
 * @n: number of byte
 *
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; s != '\0' && i < n; i++)
		s[i] = b;

	return (s);
}
