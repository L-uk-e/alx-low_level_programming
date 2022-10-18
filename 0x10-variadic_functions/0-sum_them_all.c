#include <stdarg.h>

/**
 * sum_them_all - adds numbers provided as optional arguments
 * @n: number of optional arguments
 *
 * Return: sum of optional arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return(sum);
}
