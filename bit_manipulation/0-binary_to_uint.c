#include "main.h"
/**
 * binary_to_uint - this takes a binary string and converts it into an usigned
 * int
 *
 * @b: the binary number being passed in represented as a string
 *
 * Return: the binary number in dec as an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* initialize result to zero */
	int i = 0; /* initialize index to zero */

	if (b == NULL) /* check if b is NULL */
	{
		return (0); /* return 0 if b is NULL */
	}

	while (b[i] != '\0') /* loop until the end of the string */
	{
		if (b[i] != '0' && b[i] != '1') /* check if the curchar is not 0 or 1 */
		{
			return (0); /* return 0 if the input string isn't in binary */
		}
		result = result * 2; /* shift result to the left by one bit */
		if (b[i] == '1') /* if the current bit is one */
		{
			result = result + 1; /* add one to the result */
		}
		i++; /* increment index */
	}
	return (result); /* return the final result */
}
