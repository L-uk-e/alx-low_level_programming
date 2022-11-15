#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: size to be copied
 *
 * Return: pointer to dest in main
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}

	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}

	return (dest);
}
