#include "main.h"
#include "_putchar.c"

/**
 * add - Adds two integers
 *
 * Return: Returns the result
 */
int add(int x, int y)
{
	int result = x + y;

	if (result > 99)
	{
		_putchar(result / 100 + '0');
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');
	}
	else if (result > 9)
	{
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');
	}
	else if ((result > 0) && (result < 10))
	{
		_putchar(result + '0');
	}
		
	return (result);
}
