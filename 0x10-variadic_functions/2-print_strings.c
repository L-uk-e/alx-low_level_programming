#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 * 
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	count i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator)
		{
			printf("%s%s", va_arg(ap, char *), (char *)separator);
		}
		else
		{
			printf("%s", va_arg(ap, char *));
		}
	}

	va_end(ap);
	
	printf("\n");
}
