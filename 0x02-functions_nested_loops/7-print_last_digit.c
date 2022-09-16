#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number whose last digit is to be printed
 *
 * Return: Returns value of last digit
 */
int print_last_digit(int n)
{
	int x = (n % 10);
	_putchar('0' + x);

	return (x);
}
