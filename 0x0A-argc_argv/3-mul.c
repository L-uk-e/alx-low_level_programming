#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Number of argments
 * @argv: Arguments
 *
 * Return: 0 when successful
 * 1 when arguments not present
 */
int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);

	return (0);
}
