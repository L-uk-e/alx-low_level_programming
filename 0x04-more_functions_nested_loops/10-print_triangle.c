#include "main.h"

/**
 * print_triangle - Prints a triangle made up of #
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	/* This variable x deals with number of lines*/
	int x = 0;

	if (x >= size)
	{
		_putchar('\n');
	}

	while (x < size)
	{
		/* This variable z deals with number of #*/
		int z = 0;
		/* This variable y deals with number of ' '(spaces)*/
		int y = ((size - 1) - x);

		while (y > 0)
		{
			_putchar(' ');
			y--;
		}

		while (z < x + 1)
		{
			_putchar('#');
			z++;
		}

		_putchar('\n');
		x++;
	}
}
