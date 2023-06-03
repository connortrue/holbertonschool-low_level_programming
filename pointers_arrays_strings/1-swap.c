/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	/* Check if the pointers are pointing to different memory locations */
	if (a != b)
	{
		/* Use XOR bitwise operator to swap the values of 2 integers */
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
