#include "main.h"

/**
 * _islower - checks if a character is a lowercase
 * @c: the character to check
 *
 * Return: Returns 1 if c is a lowercase.
 * Returns 0 if false
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
