#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number whose last digit is to be printed
 *
 * Return: Returns value of last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
	}

	if (n == INT_MIN)
	{
		n = 8;
	}

	x = n % 10;

	_putchar(x + '0');

	return (x);
}
