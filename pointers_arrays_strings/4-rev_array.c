#include "main.h"

/**
 * reverse_array - takes an int array and reverses it.
 *
 * @a: the array to be reversed
 * @n: how big the array is
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
