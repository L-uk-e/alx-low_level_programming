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
	int i;

	if (size <= 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(*p));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
