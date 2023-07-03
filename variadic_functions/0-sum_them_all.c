#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	/* check if n is equal to 0 */
	if (n == 0)
		return (0);

	/* initialize args variable */
	va_start(args, n);
	/* iterate over additional arguments */
	for (i = 0; i < n; i++)
	{
		/* add argument to sum */
		sum += va_arg(args, int);
	}
	/* clean up args variable */
	va_end(args);

	return (sum);
}
