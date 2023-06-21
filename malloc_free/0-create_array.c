#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: the number of elements in the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Return NULL if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(char) * size);
	/* Return NULL if memory allocation fails */
	if (array == NULL)
		return (NULL);

	/* Initialize each element of the array with the character c */
	for (i = 0; i < size; i++)
		array[i] = c;

	/* Return a pointer to the array */
	return (array);
}
