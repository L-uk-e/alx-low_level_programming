#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: An int
 * @index: The index/position
 *
 * Return: Value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	x = n >> index;

	if (x < 0)
	{
		return (-1);
	}

	return (x & 1);
}
