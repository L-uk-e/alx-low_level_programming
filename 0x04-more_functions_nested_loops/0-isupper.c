#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: the character to be checked
 *
 * Return: Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
