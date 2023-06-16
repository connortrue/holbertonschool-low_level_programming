/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	/* Loop through the string until the null terminator is reached */
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
