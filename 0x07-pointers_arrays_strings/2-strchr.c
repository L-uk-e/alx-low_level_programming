#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @c: The character to be located
 * @s: The string to search for occurence of character
 *
 * Return: Pointer to first occurence of char c
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*(s + i) != '\0' && *(s + i) != c)
	{
		i++;
	}

	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
