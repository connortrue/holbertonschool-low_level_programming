#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the function to compare values
 *
 * Return: index of the first element that matches, or -1 if none or size <= 0
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	size_t i;

	/* Check if array and cmp are not NULL */
	if (array && cmp)
	{
		/* Iterate over the elements of the array */
		for (i = 0; i < size; i++)
		{
			/* Call cmp on each element */
			if (cmp(array[i]))
				/* Return the index if cmp returns non-zero */
				return (i);
		}
	}
	/* Return -1 if no match is found or size <= 0 */
	return (-1);
}

