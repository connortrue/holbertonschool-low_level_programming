/**
 * _islower - takes the int c, the ASCII value of a character and checks if it'
 * s in the range of the lowercase alphabet.
 *
 * Return: 1 if it is and 0 if it ain't (a lowercase letter)
 *
 * @c: an int holding the ascii value of a character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
