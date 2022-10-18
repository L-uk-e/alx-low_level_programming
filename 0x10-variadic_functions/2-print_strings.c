#include <stdarg.h>
#include <stdio.h>

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

	va_start(ap, n);

	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%s%s", va_arg(ap, char *), (char *)separator);
		}
		else
		{
			printf("%s", va_arg(ap, char *));
		}
	}
	
	printf("\n");
}
