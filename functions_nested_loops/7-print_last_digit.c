#include "main.h"
/**
 * print_last_digit - takes a number and returns the abs val of the last digit
 *
 * @n: the number we're recieving
 * Return: returns the abs value of the last digit
 */

int print_last_digit(int n)
{
	int lastn = n % 10;

	if (lastn < 0)
		lastn = -lastn;
	_putchar(lastn + '0');
	return (lastn);
}
