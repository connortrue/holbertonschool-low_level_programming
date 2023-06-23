#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b); /* Allocate memory using malloc */
	if (ptr == NULL)
		exit(98); /* If malloc fails, exit with status 98 */

	return (ptr); /* Return a pointer to the allocated memory */
}
