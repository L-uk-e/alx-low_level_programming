#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all combinations of single-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		putchar('\n');
	}

	return (0);
}
