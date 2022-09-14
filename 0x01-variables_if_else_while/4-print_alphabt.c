#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lower case letters except e and q
 *
 * Return: Always 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
			lower++;
		}

		else
		{
			lower++;
		}
	}

	putchar('\n');

	return (0);
}
