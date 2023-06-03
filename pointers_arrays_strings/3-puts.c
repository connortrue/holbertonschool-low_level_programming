/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * @str: Pointer to the string.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i = 0;

	/* Loop through the string until the null terminator is reached */
	while (str[i] != '\0')
	{
		/* Print each character of the string */
		_putchar(str[i]);
		i++;
	}

	/* Print a new line character */
	_putchar('\n');
}
