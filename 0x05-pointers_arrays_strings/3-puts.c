#include "main.h"

/**
 * _puts - prints a string followed by a new line.
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int x = 0, i = 10, z = 0;

	while (i != 0)
	{
		i = str[x];

		x++;
	}

	while (z < (x - 1))
	{
		_putchar(str[z]);

		z++;
	}

	_putchar('\n');
}
