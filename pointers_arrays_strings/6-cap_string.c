#include "main.h"

/**
 * *cap_string - turs the words in a string uppercase
 * @s: the string being transformed
 * Return: the string with words upshifted
 */

char *cap_string(char *s)
{
	int i = 0, j;
	int new_word = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			new_word = 0;
		}
		else
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (s[i] == separators[j])
				{
					new_word = 1;
					break;
				}
			}
			if (separators[j] == '\0')
				new_word = 0;
		}
		i++;
	}
	return (s);
}
