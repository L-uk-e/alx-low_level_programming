#include "main.h"

/**
 * _memset - fills memory area with constant byte
 * @s: The address of memory to fill
 * @b: What to fill
 * @n: Size memory to fill
 *
 * Return: The new string formed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	while (x < n)
	{
	 	*(s + x) = b;
	 	x++;
	}

	return (s);
}
