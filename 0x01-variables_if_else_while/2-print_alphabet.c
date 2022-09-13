#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Output lowercase letters
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}
