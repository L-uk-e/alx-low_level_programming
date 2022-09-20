#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string passed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, y;

	i = _strlen(str);

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i + 1) / 2;
	}

	y = i + 1;

	while (y > n)
	{
		_putchar(*(str + n));
		n++;

	}

	_putchar('\n');
}

/**
 * _strlen - Computes the length of a string
 * @s: String given
 *
 * Return: Length of given string
 */
int _strlen(char *s)
{
	int i = 1;
	int x = 0;

	while (i != 0)
	{
		i = s[x];
		x++;
	}

	return (x - 1);
}
