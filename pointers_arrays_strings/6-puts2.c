#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 *
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	/* Iterate through the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Print every other character */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	/* Print a new line character */
	_putchar('\n');
}
