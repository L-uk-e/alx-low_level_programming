#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers provided
 * @separator: points to string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	count i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator)
		{
			printf("%d%s", va_arg(ap, int), (char *)separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}

	va_end(ap);

	printf("\n");
}
