#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase letters in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char lr = 'z';

	while (lr >= 'a')
	{
		putchar(lr);
		lr--;
	}

	putchar('\n');

	return (0);
}
