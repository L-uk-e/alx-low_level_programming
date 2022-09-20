#include "main.h"

/**
 * _strcpy - Copies string from one char * to another
 * @src: String to be copied
 * @dest: where string is to be copied to.
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, x = 0;

	l = _strlen(src) - 1;

	while (x <= l)
	{
		*(src + x) = *(dest + x);
		x++;
	}

	*(src + (x + 1)) = '\0';

	return (dest);
}

/**
 * _strlen - Computes the length of a string
 * @s: String given
 *
 * Return: Length of given string
 */
int _strlen(char *s)
{
	int i = 1;
	int x = 0;

	while (i != 0)
	{
		i = s[x];
		x++;
	}

	return (x - 1);
}
