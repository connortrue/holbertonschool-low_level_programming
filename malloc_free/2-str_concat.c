#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of the strings */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the new string */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	/* Return NULL if memory allocation fails */
	if (concat == NULL)
		return (NULL);

	/* Copy the characters from s1 to the new string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	/* Copy the characters from s2 to the new string */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];
	/* Add a null terminator at the end of the new string */
	concat[i] = '\0';

	/* Return a pointer to the new string */
	return (concat);
}
