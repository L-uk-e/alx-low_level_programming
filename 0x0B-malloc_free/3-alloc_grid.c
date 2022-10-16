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
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);

		if (p == NULL)
		{
			return (NULL);
		}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			free(p);
			while (i != 0)
			{
				free(p[i]);
				i--;
			}
			return (NULL);
		}
	}

	return (p);
}
