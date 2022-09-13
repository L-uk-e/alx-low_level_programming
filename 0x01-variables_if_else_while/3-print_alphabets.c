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

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	putchar('\n');

	return (0);
}
