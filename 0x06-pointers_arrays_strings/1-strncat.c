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
	return strncat(dest, src, n);
}
