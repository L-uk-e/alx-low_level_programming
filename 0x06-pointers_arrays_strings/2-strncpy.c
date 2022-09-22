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
	int i = 0, x = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	if (i > n)
	{
		while (x < n && *(src + x) != '\0')
		{
			*(dest + x) = *(src + x);
			x++;
		}

	}

	else
	{
		while (x < n)
		{
			*(dest + x) = *(src + x);
			x++;
		}

		while (x < i)
		{
			*(dest + x) = '\0';
			x++;
		}
	}

	return (dest);
}
