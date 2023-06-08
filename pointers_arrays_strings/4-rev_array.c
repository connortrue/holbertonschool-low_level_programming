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
	n--;
	/* Print the string in reverse order */
	while (n > 0)
	{
		_putchar(a[n]);
		n--;
	}

	/* Print a new line character */
	_putchar('\n');
}
