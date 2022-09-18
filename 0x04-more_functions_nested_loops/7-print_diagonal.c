#include "main.h"

/**
 * print_diagonal - Draws/Prints diagonal lines
 * @n: number of times to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x = 0;

	while (x < n)
	{
		int y = 0;

		while (y < x)
		{
			_putchar(' ');
			y++;
		}

		_putchar('\\');

		if (x != (n - 1))
		{
			_putchar('\n');
		}

		x++;

	}

	_putchar('\n');
}
