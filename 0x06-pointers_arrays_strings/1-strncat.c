#include "main.h"
#include <string.h>

/**
 *_strcat - adds both strings and return single string
 *@dest - return value
 *@src: string to be copied from
 *@n: number of char. to be copied
 * Return: @dest
 *
 */


char *_strncat(char *dest, char *src, int n)
{
	int ls, ld, i = 0;

	ld = strlen(dest);
	ls = strlen(src);

	while (i < ls && i < n)
	{
		dest[ld] = src[i];
		ld++;
		ls++;
	}
	dest[ld] = '\0';
	return (dest);
}
