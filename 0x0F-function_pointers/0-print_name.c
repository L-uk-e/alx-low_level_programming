#include "function_pointers.h"

/**
 * print_name - Prints names
 * @name: pointer to string of name
 * @f: Function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
