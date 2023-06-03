#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: The array of integers to be printed.
 * @n: The number of elements to be printed.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	/* Print the first element */
	printf("%d", a[0]);

	/* Print the remaining elements */
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	/* Print a new line character */
	printf("\n");
}
