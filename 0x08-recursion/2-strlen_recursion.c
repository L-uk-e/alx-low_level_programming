#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: Pointer to string provided
 *
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
