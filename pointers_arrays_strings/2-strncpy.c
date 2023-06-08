#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}

	int i;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		 dest[i] = '\0';
		 i++;
	}

	return (dest);
}
