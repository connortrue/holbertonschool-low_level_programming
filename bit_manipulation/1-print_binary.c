#include "main.h"
/**
 * print_binary - prints a binary representation of a number
 *
 * @n: the number in full to be turned to binary
 *
 * Return: the number turned to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1) /* recursively call print_binary with n divided by 2 */
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0'); /* print the last digit of n */
}
