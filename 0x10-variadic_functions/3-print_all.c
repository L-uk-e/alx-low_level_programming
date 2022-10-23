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
	va_list ap;

	va_start(ap, format);

	int x = 0;

	while (*(format + x) != '\0')
	{
		switch (*(format + x))
		{
		case 'c':
			printf("%c", (char)va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			if (va_arg(ap, char *) == NULL)
			{
				printf("nil");
				
			}
			else
			{
				printf("%s", va_arg(ap, char *));
			}
			break;
		default:
			break;
		}

		x++;
	}
	printf("\n");
}
