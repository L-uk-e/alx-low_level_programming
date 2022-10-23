#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * separator - separates words
 * @next: pointer to check for next char
 *
 * Return: void
 */
void separator(char next)
{
	if (next)
	{
		printf(", ");
	}
}

/**
 * print_all - prints anything
 * @format: arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	va_list ap;
	char *word;
	char character;
	int number;
	float dnumber;

	va_start(ap, format);

	while (*(format + x))
	{
		switch (*(format + x))
		{
		case 'c':
			character = (char)va_arg(ap, int);
			printf("%c", character);
			separator(*(format + x + 1));
			break;
		case 'i':
			number = va_arg(ap, int);
			printf("%d", number);
			separator(*(format + x + 1));
			break;
		case 'f':
			dnumber = va_arg(ap, double);
			printf("%f", dnumber);
			separator(*(format + x + 1));
			break;
		case 's':
			word = va_arg(ap, char *);
			if (word == NULL)
			{
				word = "(nil)";
			}
			printf("%s", word);
			separator(*(format + x + 1));
			break;
		}
		x++;
	}
	va_end(ap);

	printf("\n");
}
	
