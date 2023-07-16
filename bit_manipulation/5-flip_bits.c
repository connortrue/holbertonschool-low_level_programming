#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m; /* XOR of n and m */
	unsigned int count = 0; /* count of bits to flip */

	while (xor)
	{
		count += xor & 1; /* increment count if last bit is 1 */
		xor >>= 1; /* shift xor right by 1 */
	}

	return (count);
}
