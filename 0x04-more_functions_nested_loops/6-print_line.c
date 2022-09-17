#include "main.h"

/**
 * print_line - Prints a specified number of underscore characters
 * @n: number of times to print
 *
 * Return: void
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar(_);
		x++;
	}

	_putchar('\n');
}
