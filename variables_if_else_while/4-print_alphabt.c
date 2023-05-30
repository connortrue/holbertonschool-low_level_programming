#include <stdio.h>

/**
 * main - prints every character in the alphabet, lowercase, ending with a nl
 * except for the letters e and q
 *
 * Return: returns 0 when it works
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');

	return (0);
}
