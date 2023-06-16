#include "main.h"

/**
 * *_strncpy - copies a string for n characters
 *
 * @dest: the destination string
 * @src: the source string
 * @n: number of characters to copy
 * Return: returns dest, the copied string, with n null bytes after it
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
