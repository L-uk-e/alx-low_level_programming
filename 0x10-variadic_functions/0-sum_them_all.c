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
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
