#include "main.h"

/**
 * _strcpy - Copies string from one char * to another
 * @src: String to be copied
 * @dest: where string is to be copied to.
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}

	*(dest + x) = '\0';

	return (dest);
}
