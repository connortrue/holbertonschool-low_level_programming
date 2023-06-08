#include "main.h"

/**
 * *_strcat - concats passed strings. Make sure the first array is long enough
 *
 * @dest: string to be added onto.
 * @src: string that we are adding.
 *
 * Return: dest is the concatted string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
