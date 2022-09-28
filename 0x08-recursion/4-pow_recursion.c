#include "main.h"

/**
 * _pow_recursion - Calculates the powers of numbers
 * @x: number
 * @y: power
 *
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (x == 1 || y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
