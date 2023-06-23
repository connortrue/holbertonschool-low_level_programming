#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The first value in the array
 * @max: The last value in the array
 *
 * Return: A pointer to the newly created array, or NULL if min > max or
 *         malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	/* Initialize the elements of the array */
	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	/* Return a pointer to the newly created array */
	return (array);
}
