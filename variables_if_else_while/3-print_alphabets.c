#include <stdio.h>

/**
 * main - prints every character in the alphabet, lowercase, ending with a nl
 *
 * Return: returns 0 when it works
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
