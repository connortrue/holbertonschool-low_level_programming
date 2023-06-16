#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print
 *
 * This function uses recursion to print each character of the string
 * in reverse. When it reaches the end of the string, it starts printing
 * each character on the way back.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* If we reach the end of the string */
		return; /* We exit the function */
	/* Call the function again with the next character */
	_print_rev_recursion(s + 1);
	_putchar(*s); /* Print the current character on the way back */
}
