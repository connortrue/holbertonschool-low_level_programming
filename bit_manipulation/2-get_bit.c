#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* check if index is greater than the number of bits in n */
	if (index > (sizeof(n) * 8))
		return (-1); /* return -1 to indicate an error */

	/* shift n right by index positions and perform bitwise AND with 1 */
	return ((n >> index) & 1);
}
