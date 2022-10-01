#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 *
 * Return: 0 when successful
 * 1 when a wrong value is entered
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(*(argv + i)) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(*(argv + i));
	}

	printf("%d\n", sum);
}
