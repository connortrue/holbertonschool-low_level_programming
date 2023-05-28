#include <unistd.h>
#include "main.h"
/**
 * main - makes a string of the alphabet and loops through it, then a new line
 *
 * Return: returns zero when complete
 */

int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str)
		_putchar(*str++);
	_putchar('\n');
	return (0);
}
