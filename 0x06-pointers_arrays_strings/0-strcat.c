#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + x) != '\0')
	{
		*(dest + i) = *(src + x);
		i++;
		x++;
	}

	*(dest + i) = '\0';

	return (dest);
}
