#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* initialize args variable */
	va_start(args, n);
	/* iterate over additional arguments */
	for (i = 0; i < n; i++)
	{
		/* get argument */
		str = va_arg(args, char *);
		/* print argument or (nil) if NULL */
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		/* print separator if not NULL and not last argument */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	/* clean up args variable */
	va_end(args);
	printf("\n");
}
