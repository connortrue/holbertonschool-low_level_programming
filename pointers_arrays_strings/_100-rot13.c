#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Description: This function encodes a string using the rot13 algorithm.
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Loop through string */
	for (i = 0; s[i]; i++)
	{
		/* Loop through input/output arrays */
		for (j = 0; input[j]; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}

	return (s);
}
