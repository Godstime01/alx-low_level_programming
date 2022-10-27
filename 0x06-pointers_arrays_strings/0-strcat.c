#include "main.h"
#include <string.h>
/**
 *_strcat - concatenate strings
 *@dest: destination
 *@src: source
 *Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int ld = strlen(dest), ls = strlen(src), i = 0;

	while (i < ls)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (dest);
}
