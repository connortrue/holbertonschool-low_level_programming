/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 *
 * This function uses recursion to calculate the value of x raised to
 * the power of y. If y is lower than 0, it returns -1.
 *
 * Return: the value of x raised to the power of y, or -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* If y is lower than 0 */
		return (-1); /* We return -1 */
	if (y == 0) /* If y is 0 */
		return (1); /* x raised to the power of 0 is 1 */
	/* Otherwise, we calculate x raised to the power of y recursively */
	return (x * _pow_recursion(x, y - 1));
}
