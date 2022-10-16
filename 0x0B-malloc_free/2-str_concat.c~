#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to formed string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int w = 0, x = 0, y = 0, z = 0;

	while (*(s1 + w) != '\0')
	{
		w++;
	}

	while (*(s2 + x) != '\0')
	{
		x++;
	}

	p = malloc((x + y) * sizeof(*p) + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	while (y < w)
	{
		*(p + y) = *(s1 + y);
		y++;
	}

	while (z < x)
	{
		*(p + y + z) = *(s2 + z);
		z++;
	}

	*(p + y + z) = '\0';

	return (p);
}
