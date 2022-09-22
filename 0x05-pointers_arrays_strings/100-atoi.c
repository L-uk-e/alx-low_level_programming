#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: String
 *
 * Return: The integer
 */
int _atoi(char *s)
{
	int i = 1, x = 0;

	do
	{
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			x = x * 10 + (*s - '0');
		}
		else if (x > 0)
		{
			break;
		}
		
	}
	
	while (*s++);
	
	return (x *i);
}
