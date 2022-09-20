#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, x = 0;

	i = _strlen(s) - 1;

	while (i > x)
	{
		swap_char(s + i, s + x);
		i--;
		x++;
	}
	
}

/**
 * _strlen - Computes the length of a string
 * @s: String given
 *
 * Return: Length of given string
 */
int _strlen(char *s)
{
	int i = 1;
	int x = 0;

	while (i != 0)
	{
		i = s[x];
		x++;
	}

	return (x - 1);
}

/**
 * swap_char - Swaps the values of two chars
 * @a: value of one integer
 * @b: value of the other integer
 *
 * Return: void
 */
void swap_char(char *a, char *b)
{
	char c = *a;

	*a = *b;

	*b = c;
}
