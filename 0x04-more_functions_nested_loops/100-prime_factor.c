#include <stdio.h>

/**
 * prime_factor - Prints the largest prime factor of a number
 * @n: The number
 *
 * Return: The largest prime factor
 */
unsigned long int prime_factor(unsigned long int n)
{
	unsigned long int x = 2;
	unsigned long int y = n;

	while (y != 1)
	{
		if ((y % x) == 0)
		{
			y = y / x;
			if (y != 1)
			{
				x = 1;
			}
		}
		if (y != 1)
		{
			x++;
		}
	}

	return (x);
}

/**
 * main - Using prime_factor function
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int z;

	z = prime_factor(612852475143);
	printf("%lu\n", z);

	return (0);
}
