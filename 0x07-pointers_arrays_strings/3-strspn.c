#include "main.h"

/**
 * _strspn - Gets the length of a prefix subxtring
 * @s: String provided
 * @accept: The set of accepted strings
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i, z = 0;

	while (*(s + z) != '\0')
	{

		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if ( *(accept + i) == *(s + z))
			{
				x++;
			}
			
		}

		z++;

	}

	return (x);
}
