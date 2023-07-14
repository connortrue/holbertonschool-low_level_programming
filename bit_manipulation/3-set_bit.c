#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set the bit in
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is greater than the number of bits in *n */
	if (index > (sizeof(*n) * 8))
		return (-1); /* return -1 to indicate an error */

	/* do bitwise OR on *n and 1 left-shifted by index positions */
	*n |= (1 << index);
	return (1); /* return 1 to indicate success */
}

