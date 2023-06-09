#include "main.h"

/**
 * *string_toupper - turns every lowercase character in a string to it's
 * uupercasei
 *
 * @s: the string being case shifted
 *
 * Return: case shifted string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
