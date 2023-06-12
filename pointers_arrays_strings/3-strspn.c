/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to search for
 *
 * This function calculates the number of characters at the beginning of string
 * s that are also in string accept. It does this by using a nested loop to
 * check each character in s against all characters in accept. If a match is
 * found, the count is incremented and the inner loop is exited. If no match is
 * found for a character in s, the outer loop is exited and the final count is
 * returned.
 *
 * Return: the number of characters at the beginning of s that are also in
 * accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	/* Loop through each character in s */
	while (*s)
	{
		/* Loop through each character in accept */
		for (p = accept; *p; p++)
		{
			/* If the current character in s matches a character in accept */
			if (*s == *p)
			{
				count++; /* Increment count */
				break; /* Exit the inner loop */
			}
		}
		/* If no match was found for the current character in s */
		if (*p == '\0')
			break; /* Exit the outer loop */
		s++; /* Move to the next character in s */
	}
	return (count); /* Return the final count */
}
