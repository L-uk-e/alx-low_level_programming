#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints digits 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
