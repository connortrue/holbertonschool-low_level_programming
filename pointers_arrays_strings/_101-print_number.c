#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Description: This function prints an integer using only the _putchar
 * function.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
