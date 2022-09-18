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
		_putchar('\\');

		int y = 0;

		while (y < x)
		{
			_putchar('\n');
			y++;
		}

		x++;
		
	}
