#include "main.h"

int print_last_digit(int n)
{
	int lastn = n % 10;
	if (lastn < 0)
		lastn = -lastn;
	_putchar(lastn + '0');
	return (lastn);
}
