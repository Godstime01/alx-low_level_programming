#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strncat - adds both strings and return single string
 *@dest: return value
 *@src: string to be copied from
 *@n: number of char. to be copied
 *Return: @dest
 *
 */


char *_strncat(char *dest, char *src, int *n)
{
	int ld = 0;
	int ls = 0;

	while (dest[ld] != '\0')
		ld++;

	while (src[ls] != '\0')
		ls++;

	int i = 0;

	while (i < ls && i < n)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (dest);
}
