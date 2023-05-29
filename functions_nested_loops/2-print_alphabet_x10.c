#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lower case to stdout, followed
 * by a new line, 10 times.
 *
 * Return: returns zero when complete
 */

void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		char *str = "abcdefghijklmnopqrstuvwxyz";
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
