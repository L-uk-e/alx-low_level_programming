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
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');

	return (0);
}
