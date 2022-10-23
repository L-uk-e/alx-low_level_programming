#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: value of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int n1 = 0, n2 = 0, x = 0;

	while (*(s1 + x) != '\0')
	{
		n1 = n1 + *(s1 + x);
		x++;
	}

	x = 0;

	while (*(s2 + x) != '\0')
	{
		n2 = n2 + *(s2 + x);
		x++;
	}

 

	if (n1 > n2)
	{
		return (15);
	}
	else if (n1 < n2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
