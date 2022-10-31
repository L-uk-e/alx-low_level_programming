#include "main.h"

/**
 * binary_to_uint - Converts an unsigned number to an unsigned int
 * @b: String of 0's and 1's representing the binary number
 *
 * Return: Value of string in binary. The unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 1;
	int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*(b + num) != '\0')
	{
		num++;
	}

	while (num > 0)
	{
		if (*(b + num - 1) == '0')
		{
			x += 0;
		}
		else if (*(b + num - 1) == '1')
		{
			x += y;
		}
		else
		{
			return (0);
		}

		num--;
		y *= 2;
	}

	return (x);
}
