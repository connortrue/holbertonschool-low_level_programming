#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0 or
 *         malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0) /* Return NULL if nmemb or size is 0 */
		return (NULL);

	ptr = malloc(nmemb * size); /* Allocate memory for the array */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++) /* Set the allocated memory to 0 */
		ptr[i] = 0;

	return (ptr); /* Return a pointer to the allocated memory */
}
