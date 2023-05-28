#include <unistd.h>
#include "main.h"
/**
 * main - makes a string called _putchar and passes each char to the function
 * of the same name
 *
 * Return: returns zero when complete
 */

int main(void)
{
	char *str = "_putchar\n";

	while (*str)
		_putchar(*str++);
	return (0);
}
