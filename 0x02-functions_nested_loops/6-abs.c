#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @x: Value to be computed
 *
 * Return: Returns the absolute value
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
	}

	return (x);
}
