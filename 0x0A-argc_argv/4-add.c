#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: arguments
 *
 * Return: 0 when successful
 * 1 when a wrong value is entered
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(*(argv + i));
	}

	printf("%d\n", sum);

	return (0);
}
