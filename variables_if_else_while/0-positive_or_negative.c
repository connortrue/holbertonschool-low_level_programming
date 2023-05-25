#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This makes a random number and tests to see if it's positve, negeativ
 * e, or zero, and prints the result
 *
 * Return: Returns zero if it works properly.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
