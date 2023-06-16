/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * This function uses recursion to count the number of characters in
 * the string. When it reaches the end of the string, it returns 0 and
 * adds 1 on the way back for each character.
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* If we reach the end of the string */
		return (0); /* We return 0 */
	/* Add 1 for each character on the way back */
	return (1 + _strlen_recursion(s + 1));
}
