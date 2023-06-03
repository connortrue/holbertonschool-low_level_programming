#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 *
 * @str: The string to be printed.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i, len;

	/* Find the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Print the second half of the string */
	for (i = (len + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	/* Print a new line character */
	_putchar('\n');
}
