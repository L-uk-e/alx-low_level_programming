#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a pair of digits without repeating combinations
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 48;
	int y = 49;

	while ((x <= 56) && (y <= 57))
	{
		putchar (x);
		putchar (y);

		if ((x == 56) && (y == 57))
		{
			x++;
			y++;
		}
		else
		{
			putchar(',');
			putchar(' ');
			if (y < 57)
			{
				y++;
			}
			else
			{
				x++;
				y=x+1;
			}
		}
	}
	putchar('\n');

	return (0);
}
