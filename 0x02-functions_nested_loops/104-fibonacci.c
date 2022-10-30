#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int x = 1, y = 2, next;
	int count = 0;

	printf("%ld", x);

	while (count < 97)
	{
		printf(", %lu", y);
		next = x + y;
		x = y;
		y = next;
		count ++;
	}
	printf("\n");

	return (0);
}

	
