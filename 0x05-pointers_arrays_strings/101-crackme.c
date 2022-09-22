#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int x;

	while (x <= 2199)
	{
		c = rand() % 128;
		x = x + c;
		_putchar(c);
	}
	putchar(2500 - x);
	return (0);
}
