#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	char letter[10] = "_putchar";

	int x = 0;

	while ( x < 8 )
	{
		_putchar(letter[x]);
		x++;
	}
	_putchar(10);
	return (0);
}
