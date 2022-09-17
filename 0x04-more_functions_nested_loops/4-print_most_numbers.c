#include "main.h"

/**
 * print_most_numbers - Prints all numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if ( i == 50 || i == 48)
		{
			i++;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
