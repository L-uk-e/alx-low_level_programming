#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds numbers provided as optional arguments
 * @n: number of optional arguments
 *
 * Return: sum of optional arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
