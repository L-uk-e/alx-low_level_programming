#include "main.h"
#include "_putchar.c"

/**
 * times_table - Prints the 9 times-table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
		y = 0;
	
		while (y < 9)
		{
			if ((x * y) < 10)
			{
				
				_putchar(x * y + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				y++;
			}
			else
			{
				_putchar((x * y) / 10 + '0');
				_putchar((x * y) % 10 + '0');
				_putchar(',');
				_putchar(' ');
				y++;
			}
		}	
		while (y == 9)
		{
			if ((x * y) < 10)
			{
				_putchar(x * y + '0');
				y++;
			}
			else
			{
				_putchar((x * y) / 10 + '0');
				_putchar((x * y) % 10 + '0');
				y++;
			}
		}

		_putchar('\n');
		x++;
		
	}
}
