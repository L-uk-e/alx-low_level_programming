#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates arrays of chars and initializes it with a char
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc((size * sizeof(*p)) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	*p = (char)c;
	*(p + size) = ('\0');

	return (p);
}
