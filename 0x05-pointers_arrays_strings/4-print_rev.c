#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string entered
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x = 10, y = 0, z;

	while (x != 0)
	{
		x = s[y];

		y++;
	}

	z = y - 2;

	while (z >= 0)
	{
		_putchar(s[z]);

		z--;
	}

	_putchar('\n');

}
