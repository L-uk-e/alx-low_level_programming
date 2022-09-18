#include "main.h"

/**
 * print_triangle - Prints a triangle made up of #
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x = 0;

	while (x < size)
	{
		int z = 0;
		int y = (size - x);
		
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
