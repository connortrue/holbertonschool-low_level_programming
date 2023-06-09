#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to a memory area to be filled
 * @b: the constant byte to fill it with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
