#include <stdio.h>

/**
 * main - prints every character in the alphabet, lowercase, ending with a nl
 *
 * Return: returns 0 when it works
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
