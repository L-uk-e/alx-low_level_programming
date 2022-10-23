#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String to search
 * @accept: String that contains bytes to be matched in s
 *
 * Return: pointer to the first match
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y = 0;

	while (*(s + y))
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(accept + x) == *(s + y))
			{
				return (s + y);
			}
		}
		y++;

	}

	return ('\0');
}
