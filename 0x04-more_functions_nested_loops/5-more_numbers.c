#include "main.h"

/**
 * more_numbers - Prints numbers 0 - 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int x = 48;
		int y = 0;
		int w = x;

		while (y < 15)
		{
			if (y > 9)
			{
				w = x - 10;
				_putchar(49);
				x++;
				y++;
			}

			_putchar(w);

		}

		x = 48;
	}

	_putchar('\n');
}
