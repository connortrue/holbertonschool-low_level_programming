#include "main.h"

/**
 * *leet - translates a string into leet speek
 *
 * @s: the string being translated
 *
 * Return: the translated string
 */

char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j / 2];
			}
		}
	}
	return (s);
}
