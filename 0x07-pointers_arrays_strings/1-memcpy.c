#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: copy destination
 * @src: copy source
 * @n: n byte
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
