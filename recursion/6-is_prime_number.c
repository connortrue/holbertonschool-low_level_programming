#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number to check
 *
 * This function uses recursion to check if n is a prime number.
 * If n is less than or equal to 1, it returns 0.
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1) /* If n is less than or equal to 1 */
		return (0); /* It is not a prime number */
	/* Check if n is divisible by any number from 2 to n - 1 */
	return (_prime_helper(n, 2));
}

/**
 * _prime_helper - helper function to check if n is a prime number
 * @n: the number to check
 * @i: the current number to check
 *
 * This function uses recursion to check if n is divisible by i.
 * If n is divisible by i, it returns 0. If i is greater than or equal to
 * n / 2, it returns 1.
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */
int _prime_helper(int n, int i)
{
	if (n % i == 0) /* If n is divisible by i */
		return (0); /* It is not a prime number */
	if (i >= n / 2) /* If we have checked all numbers from 2 to n / 2 */
		return (1); /* It is a prime number */
	/* Otherwise, we check the next number */
	return (_prime_helper(n, i + 1));
}
