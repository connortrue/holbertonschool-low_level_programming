/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to search for
 *
 * Description: The _strchr() function returns a pointer to the first
 * occurrence of the character c in the string s, or NULL if the character
 * is not found.
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /* iterate through string s */
	{
		if (*s == c) /* check if current character matches c */
			return (s); /* return pointer to current character */
		s++; /* move to next character in string */
	}
	return (NULL); /* character not found, return NULL */
}
