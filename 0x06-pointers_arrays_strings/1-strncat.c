#include "main.h"

/**
 * _strncat - Concatnates a maximum number of bytes from one string to another
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while ((x < n) && (*(src + x) != '\0'))
	{
		*(dest + i) = *(src + x);
		x++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
