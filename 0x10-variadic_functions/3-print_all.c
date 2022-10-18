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
