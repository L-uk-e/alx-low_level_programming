#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: Array name
 * @n: Array size
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (n > x)
	{
		if ((n - 1) != x)
		{
			printf("%d, ", *(a + x));
			x++;
		}
		else
		{
			printf("%d", *(a + x));
			x++;
		}
	}
	printf("\n");
}
