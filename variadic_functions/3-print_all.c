#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	/* initialize args variable */
	va_start(args, format);
	/* iterate over format string */
	while (format != NULL && format[i] != '\0')
	{
		/* check format character and print corresponding argument */
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	/* clean up args variable */
	va_end(args);
	printf("\n");
}
