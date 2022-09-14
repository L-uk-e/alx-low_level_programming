#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints three digit combinations without repeating a combination
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 48;
	int y = 49;
	int z = 50;

	while ((x <= 55) && (y <= 56) && (z <= 57))
	{
		putchar(x);
		putchar(y);
		putchar(z);

		if ((x == 55) && (y == 56) && (z == 57))
		{
			x++;
			y++;
			z++;
		}
		else
		{
			putchar(',');
			putchar(' ');

			if (z < 57)
			{
				z++;
			}
			else if (y < 56)
			{
				z = 1 + ++y;
			}
			else
			{
				y = 1 + ++x;
				z = 1 + y;
			}
		}
	}
	putchar('\n');

	return (0);
}
