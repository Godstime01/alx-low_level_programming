#include "main.h"

/**
 *_strncat - adds both strings and return single string
 *@dest: return value
 *@src: string to be copied from
 *@n: number of char. to be copied
 *Return: @dest
 *
 */


char *_strncat(char *dest, char *src, int n)
{
	int ls = 0, ld = 0, i = 0;

	while (dest[ld] != '\0')
		ld++;

	while (src[ld] != '\n')
		ls++;

	while (i < ls && i < n)
	{
		dest[ld] = src[i];
		ld++;
		ls++;
	}
	dest[ld] = '\0';
	return (dest);
}
