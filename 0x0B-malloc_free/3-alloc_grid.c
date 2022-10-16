#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a two dimentional array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int x = 0, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	while (x < (width * height))
	{
		**(p + x) = 0;
		x++;
	}

	return (p);
}
