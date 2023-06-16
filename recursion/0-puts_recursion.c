#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to print
 *
 * This function uses recursion to print each character of the string.
 * When it reaches the end of the string, it prints a new line and exits.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* If we reach the end of the string */
	{
		_putchar('\n'); /* We print a new line */
		return; /* And exit the function */
	}
	_putchar(*s); /* Otherwise, we print the current character */
	/* And call the function again with the next character */
	_puts_recursion(s + 1);
}
