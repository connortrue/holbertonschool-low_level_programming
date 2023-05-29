#include "main.h"
#include <unistd.h>
/**
 * print_sign - tests whether the number is positive or negative and prints
 * the sign (+, -, or 0)
 * Return: returns 1 if it's positive, -1 if it's negative, and 0 if 0
 * @n: and integer holding a number to test
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
