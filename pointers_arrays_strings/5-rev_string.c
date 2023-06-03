#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	/* Find the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* Reverse the string */
	for (i--, j = 0; j < i; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
