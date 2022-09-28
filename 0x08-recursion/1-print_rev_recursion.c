#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0, x = 0;

	if (*s == '\0')
	{
		return;
	}

	while (*(s + i) != '\0')
	{
		i++;
	}

	_putchar (*(s + (i - 1)));

	char c[(i - 1)];

	while (x < (i - 1))
	{
		*(c + x) = *(s + x);
		
		x++;
	}

	*(c + x) = '\0';

	_print_rev_recursion(c);
}
