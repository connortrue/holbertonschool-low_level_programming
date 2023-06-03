#include "main.h"
/**
 * print_rev - Prints a string in reverse order followed by a new line.
 *
 * @s: The string to be printed in reverse order.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0;

	/* Find the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Print the string in reverse order */
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* Print a new line character */
	_putchar('\n');
}
