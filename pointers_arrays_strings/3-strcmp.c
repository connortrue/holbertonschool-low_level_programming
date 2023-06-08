#include "main.h"

/**
 * _strcmp - compares 2 strings char by char, returning the difference in
 * ASCII values of the characters it first finds aren't the same.
 *
 * @s1: the first string given
 * @s2: the second given string
 *
 * Return: the difference of ASCII values of the first non-matching char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
