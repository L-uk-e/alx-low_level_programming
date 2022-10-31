#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long long int x = 1, y = 2, next;
	int count = 0;

	printf("%llu", x);

	while (count < 97)
	{
		printf(", %llu", y);
		next = x + y;
		x = y;
		y = next;
		count++;
	}
	printf("\n");

	return (0);
}
