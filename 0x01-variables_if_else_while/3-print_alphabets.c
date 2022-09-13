#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Outputs letters of the alphabet
 *
 * Return: Always 0;
 */
int main(void)
{
	char upper = 'A', lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
