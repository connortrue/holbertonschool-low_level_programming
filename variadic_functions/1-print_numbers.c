#include "variadic_functions.h"
#include "variadic_functions.h"
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* initialize args variable */
	va_start(args, n);
	/* iterate over additional arguments */
	for (i = 0; i < n; i++)
	{
		/* print argument */
		printf("%d", va_arg(args, int));
		/* print separator if not NULL and not last argument */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	/* clean up args variable */
	va_end(args);
	printf("\n");
}

