#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	long int w, x = 2, y = 3, z;

	printf("1, 2");

	for (w = 0; w < 48; w++)
	{
		printf(", %ld", y);
		z = y;
		y = y + x;
		x = z;
	}
	printf("\n");

	return (0);
}
