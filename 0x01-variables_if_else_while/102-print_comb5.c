#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints combinations of two two-digit numbers no repeating
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (((c + d) > (a + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

						break;
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
