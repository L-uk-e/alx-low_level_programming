#include "main.h"

/**
 * print_square - Prints a square of # characters
 * @size: Represents size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int x = 0;

	while (x < size)
	{
		int y = 0;

		while (y < size)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		x++;
	}
}
