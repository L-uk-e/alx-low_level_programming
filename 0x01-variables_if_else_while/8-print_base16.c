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
	int n = 48;
	char c = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
