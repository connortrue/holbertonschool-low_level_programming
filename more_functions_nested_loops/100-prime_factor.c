#include <stdio.h>
#include <math.h>

/**
 * maxPrimeFactor - finds the highest prime factor of a passed double
 * @n: number being tested
 *
 * Return: returns the highest prime number found
 */

int maxPrimeFactor(double n)
{
	int maxPrime = -1;
	int i;

	/* Divide n by 2 until it is odd */
	while (fmod(n, 2) == 0)
	{
		maxPrime = 2;
		n /= 2;
	}

	/* Divide n by odd numbers starting from 3 */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (fmod(n, i) == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}

	/* If n is still greater than 2, it is a prime number */
	if (n > 2)
		maxPrime = n;

	return (maxPrime);
}

/**
 * main - entry point
 *
 * Return: 0 when done
 */

/* Function to find the maximum prime factor of a given number */
int main(void)
{
	double n = 612852475143;

	printf("%d\n", maxPrimeFactor(n));
	return (0);
}
