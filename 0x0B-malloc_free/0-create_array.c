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

	p = (char *)malloc(size * sizeof(*p));
	*p = (char)c;

	return (p);
}
