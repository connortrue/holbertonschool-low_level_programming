#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Description: This function calculates the sum of the two diagonals of a
 * square matrix of integers and prints them.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	/* Loop through matrix */
	for (i = 0; i < size; i++)
	{
		/* Add element from first diagonal to sum1 */
		sum1 += a[(size + 1) * i];
		/* Add element from second diagonal to sum2 */
		sum2 += a[(size - 1) * (i + 1)];
	}

	/* Print sums */
	printf("%d, %d\n", sum1, sum2);
}
