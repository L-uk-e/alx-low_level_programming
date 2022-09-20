#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a = 10, b = 0, c = 0, e = 4, f, g;

	while (a != 0)
	{
		a = *(s + b);
		b++;
	}

	char d[b];

	while (c < b)
	{
		*(d + c) = *(s + c);

		c++;
	}

	f = 0;
	b = b - 2;
	g = b;

	while (f <= b)
	{
		*(s + f) = *(d + g);
		f++;
		g--;
	}

	*(s + (f + 1)) = 0;

}
