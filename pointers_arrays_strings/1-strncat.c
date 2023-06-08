#include "main.h"

/**
 * *_strncat - concats 2 strings for as many chars as n
 *
 * @dest: the string to be added onto
 * @src: the string to add
 * @n: how many characters of src to add onto dest
 *
 * Return: the strings together
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
