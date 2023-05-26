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

	printf("Last digit of %d is %d ", n, n % 10);
	if (n > 5)
		printf("and is greater than 5\n");
	else if (n < 6)
		printf("and is less than 6\n");
	else if (n == 0)
		printf("and is 0\n");
	return (0);
}
