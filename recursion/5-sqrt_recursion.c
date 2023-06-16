/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * This function uses recursion to calculate the natural square root of n.
 * If n does not have a natural square root, it returns -1.
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - helper function to calculate the natural square root of n
 * @n: the number to calculate the square root of
 * @i: the current number to check
 *
 * This function uses recursion to check if i is the natural square root of n.
 * If i * i is equal to n, it returns i. If i * i is greater than n, it
 * returns -1.
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n) /* If i is the natural square root of n */
		return (i); /* We return i */
	if (i * i > n) /* If i is greater than the natural square root of n */
		return (-1); /* We return -1 */
	/* Otherwise, we check the next number */
	return (_sqrt_helper(n, i + 1));
}
