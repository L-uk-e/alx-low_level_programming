#include "main.h"

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
