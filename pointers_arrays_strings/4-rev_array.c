#include "main.h"
/**
 *  * print_rev - Prints a string in reverse order followed by a new line.
 *   *
 *    * @s: The string to be printed in reverse order.
 *     *
 *      * Return: void.
 *       */
void reverse_array(int *a, int n)
{
	/* Print the string in reverse order */
	for (--n; n >= 0; n--)
	{
		_putchar(a[n]);
	}

	/* Print a new line character */
	_putchar('\n');
}
