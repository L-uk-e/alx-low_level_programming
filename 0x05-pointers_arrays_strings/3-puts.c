#include "main.h"

/**
 * _puts - prints a string followed by a new line.
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int x = 0, i = 10;

	while (i != 0)
	{
		i = str[x];
		_putchar(str[x]);

		x++;
	}

	_putchar('\n');
}
