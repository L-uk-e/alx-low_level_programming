#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints hexadecimal digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n <= 9)
	{
		putchar(n);
		n++;
	}

	while (n <= 'f')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
