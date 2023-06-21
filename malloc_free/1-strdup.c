#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len = 0;

	/* Return NULL if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new string */
	duplicate = malloc(sizeof(char) * (len + 1));
	/* Return NULL if memory allocation fails */
	if (duplicate == NULL)
		return (NULL);

	/* Copy each character from str to the new string */
	for (i = 0; i < len; i++)
		duplicate[i] = str[i];
	/* Add a null terminator at the end of the new string */
	duplicate[len] = '\0';

	/* Return a pointer to the new string */
	return (duplicate);
}
