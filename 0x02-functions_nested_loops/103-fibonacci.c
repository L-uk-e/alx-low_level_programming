#include <stdio.h>

/**
 * main - Prints sum of even valued terms in the fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	long int next, x = 1, y = 2, sum = 0;

	while (x <= 4000000)
	{
		if ((x + y) % 2 == 0)
		{
			sum += (x + y);
		}
		next = x + y;
		x = y;
		y = next;
	}
	printf("%ld\n", sum);

	return (0);
}
