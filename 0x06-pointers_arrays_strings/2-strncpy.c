#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: size to be copied
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	for ( ; i < n; *(dest + i))
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
