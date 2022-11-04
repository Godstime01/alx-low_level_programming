#include "main.h"
#include <string.h>
/**
 *
 *
 *
 */

int main(argc, char *argv[])
{
	int i, j;

	for (i = 0; i < strlen(argv); i++)
	{
		char s[] = argv[i];
		int c = strlen(s[i]);
		for(j = 0; j < c; j++)
		{
			_putchar(s[j]);
		}
		_putchar('\n');
	}	
	return (0);
}
