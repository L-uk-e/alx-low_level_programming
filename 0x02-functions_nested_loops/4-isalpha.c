#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: The number(representing character) to check
 *
 * Return: Returns 1 if true
 * Returns 0 if false
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
