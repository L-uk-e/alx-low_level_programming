#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Prints 1 - 100. Fizz for 3 and Buzz for 5
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			if ((x % 3) == 0)
			{
				printf("Fizz");
			}
			if ((x % 5) == 0)
			{
				printf("Buzz");
			}
			printf(" ");
		}
		else
		{
			printf("%d ", x);
		}

		x++;
	}

	printf("\n");
}

/**
 * main - calls the fizz-buzz function
 *
 * Return: void
 */
int main(void)
{
	fizz_buzz();

	return (0);
}

