#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	char s[] = "_putchar";

	int x;

	for (x = 0; x <= 7; x++)
	{
		_putchar(s[x]);
	}

	_putchar(10);

	return (0);
}
