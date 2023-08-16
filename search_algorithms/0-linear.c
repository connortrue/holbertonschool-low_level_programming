#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if value is not present
 * or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Loop through each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the current array element being checked */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* If current element is value we're searching for, return its index */
		if (array[i] == value)
			return (i);
	}

	/* If we've gone through array and haven't found value, return -1 */
	return (-1);
}
