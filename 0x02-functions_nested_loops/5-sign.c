#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to be checked
 *
 * Return: Returns 1 if number is positive
 * Returns 0 if number is 0
 * Returns -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
