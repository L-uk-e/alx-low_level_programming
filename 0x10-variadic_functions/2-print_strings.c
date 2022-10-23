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
	char *word;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(ap, char *);

		if (word == NULL)
		{
			word == "nil";
		}
		
		if (i < n - 1 && separator)
		{
			printf("%s%s", word, (char *)separator);
		}
		else
		{
			printf("%s", word);
		}
	}

	va_end(ap);
	
	printf("\n");
}
