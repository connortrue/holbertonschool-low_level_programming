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
	if (n % 10 > 5 && n % 10 != 0)
		printf("and is greater than 5\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6\n");
	else
		printf("and is 0\n");
	return (0);
}
