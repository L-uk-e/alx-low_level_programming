#include "main.h"

/**
 * power - finds the value of 2 power number
 * @p: power
 *
 * Return: The result of 2 power p
 */
int power(int p)
{
	int x, result = 1;

	for (x = 0; x < p; x++)
	{
		result = result * 2;
	}

	return (result);
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x = 0, y = n;

	if (n == 0)
	{
		_putchar('0');
	}

	while (power(x) <= y)
	{
		x++;
	}

	x--;

	while (x >= 0)
	{
		if (power(x) > y)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
			y = y - power(x);
		}

		x--;
	}
}
