#include <stdio.h>
#include <stdarg.h>

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
	char *separator = ", ";
	char character;
	int number;
	float dnumber;
	char *word;

	va_start(ap, format);

	while (*(format + x))
	{
		if (*(format + x + 1))
		{
			switch (*(format + x))
			{
			case 'c':
				character = (char)va_arg(ap, int);
				printf("%c%s", character, separator);
				break;
			case 'i':
				number = va_arg(ap, int);
				printf("%d%s", number,separator);
				break;
			case 'f':
				dnumber = va_arg(ap, double);
				printf("%f%s", dnumber, separator);
				break;
			case 's':
				word = va_arg(ap, char *);
				if (word == NULL)
				{
					printf("(nil)");	
				}
				else
				{
					printf("%s%s", word, separator);
				}
				break;
			default:
				break;
			}
		}
		else
		{
			switch (*(format + x))
			{
			case 'c':
				character = (char)va_arg(ap, int);
				printf("%c", character);
				break;
			case 'i':
				number = va_arg(ap, int);
				printf("%d", number);
				break;
			case 'f':
				dnumber = va_arg(ap, double);
				printf("%f", dnumber);
				break;
			case 's':
				word = va_arg(ap, char *);
				if (word == NULL)
				{
					printf("(nil)");	
				}
				else
				{
					printf("%s", word);
				}
				break;
			default:
				break;
			}
		}
		x++;
	}
	va_end(ap);

	printf("\n");
}
	
