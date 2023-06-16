#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * This function uses recursion to calculate the factorial of the given number.
 * If n is lower than 0, it returns -1 to indicate an error.
 * The factorial of 0 is 1, so if n is 0, it returns 1.
 *
 * Return: the factorial of n, or -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0) /* If n is lower than 0 */
		return (-1); /* We return -1 to indicate an error */
	if (n == 0) /* If n is 0 */
		return (1); /* The factorial of 0 is 1 */
	/* Otherwise, we calculate the factorial recursively */
	return (n * factorial(n - 1));
}
