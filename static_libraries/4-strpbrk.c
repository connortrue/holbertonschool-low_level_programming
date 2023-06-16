#include "main.h"
#define NULL ((void *)0)
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	/* Loop through each character in s */
	while (*s)
	{
		a = accept;
		/* Loop through each character in accept */
		while (*a)
		{
			/* Check if current character in s matches current character in accept */
			if (*s == *a)
				return (s); /* If match, return pointer to current character in s */
			a++;
		}
		s++;
	}
	return (NULL); /* If no match is found, return NULL */
}
