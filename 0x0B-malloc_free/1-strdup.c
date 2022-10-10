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

	while(*(str + i) != '\0')
	{
		i++;
	}

	p = malloc(i * (typeof(*p)) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	while (x < i)
	{
		*(p + x) = *(str + x);

		x++;
	}
	*(p + x) = '\0';

	return (p);
}
