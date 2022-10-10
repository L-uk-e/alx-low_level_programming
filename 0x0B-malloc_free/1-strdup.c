#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Allocates space in memory and stores string provided
 * @str: string parameter provided
 *
 * Return: pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	p = malloc(sizeof(char) * i);

	if (p == NULL)
	{
		return (NULL);
	}

	while (x < i)
	{
		*(p + x) = *(str + x);

		x++;
	}

	return (p);
}
