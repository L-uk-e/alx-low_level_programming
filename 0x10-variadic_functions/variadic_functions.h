#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdarg.h>

typedef unsigned int counter;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
