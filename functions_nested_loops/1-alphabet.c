#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case to stdout, followed by a 
 * new line
 *
 * Return: returns zero when complete
 */

int print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str)
		_putchar(*str++);
	_putchar('\n');
	return (0);
}
