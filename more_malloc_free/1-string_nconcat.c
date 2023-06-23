#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to use from s2
 *
 * Return: A pointer to the newly allocated space in memory, or NULL if the
 *         function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL) /* Treat NULL as an empty string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0') /* Calculate the length of s1 */
		len1++;
	while (s2[len2] != '\0') /* Calculate the length of s2 */
		len2++;

	if (n >= len2) /* Use the entire string s2 if n >= len2 */
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1)); /* Allocate memory */
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++) /* Copy s1 into str */
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++) /* Copy s2 into str */
		str[i] = s2[j];
	str[i] = '\0'; /* Add null terminator */

	return (str); /* Return a pointer to the concatenated string */
}
