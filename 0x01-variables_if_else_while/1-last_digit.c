#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char number[50];
	int lastIndex = strlen(number) - 1;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sprintf(number, "%d", n);

	if (number[lastIndex] > 5)
		printf("%d is greater than 5\n", n);
	else if (number[lastIndex] == 0)
		printf("%d is 0\n", n);
	else if (number[lastIndex] < 6 && (number[lastIndex] != 0);
			printf("%d is less than 6 and not 0\n", n);
	return (0);
}
