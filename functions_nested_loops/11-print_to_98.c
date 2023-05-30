#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints the number given all the way to 98
 * @n: the number we start at
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
}
