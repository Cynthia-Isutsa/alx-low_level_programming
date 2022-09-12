#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Descrption  - print whether the number is positive or negative
 *
 * return:0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}

