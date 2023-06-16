/**
 * _isalpha - takes the int c, the ASCII value of a character and checks if it'
 * s in the range of the alphabet, upper or lowercase.
 *
 * Return: 1 if it is and 0 if it ain't (a letter)
 *
 * @c: an int holding the ascii value of a character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
