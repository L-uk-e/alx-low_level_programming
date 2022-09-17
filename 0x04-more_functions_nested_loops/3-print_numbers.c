#include "main.h"

/**
 * print_numbers - Prints numbers 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
	int x = 48;

	while (x < 58)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
