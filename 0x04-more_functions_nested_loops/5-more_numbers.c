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

		while (y < 15)
		{
			int w = x;

			if (y > 9)
			{
				w = x - 10;
				_putchar(49);
			}

			_putchar(w);
			x++;
			y++;

		}
		_putchar('\n');
		i++;
	}

}
