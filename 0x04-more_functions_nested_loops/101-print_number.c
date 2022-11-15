#include "main.h"

/**
 * print_number - Prints an int
 * @n - The number
 *
 * Return: void
 */
void print_number(int n)
{
	int x = n;
	int z = n;
	int y;

	if (n < 0)
	{
		_putchar('-');
		x = n * (-1);
		z = n * (-1);
	}

	if (z >= 1000)
	{
		y = x / 1000;
		_putchar(y + 48);
		x = x - (y * 1000);
	}
	if (z >= 100)
	{
		y = x / 100;
		_putchar(y + 48);
		x = x - (y * 100);
	}
	if (z >= 10)
	{
		y = x / 10;
		_putchar(y + 48);
		x = x - (y * 10);
	}

	y = z % 10;
	_putchar(y + 48);

	return;
}
