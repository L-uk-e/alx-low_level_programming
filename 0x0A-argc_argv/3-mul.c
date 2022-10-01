#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * argc: Number of argments
 * argv: Arguments
 *
 * Return: 0 when successful
 * 1 when arguments not present
 */
int main(int argc, char *argv[])
{
	int mul;
	
	if (argc < 3)
	{
		printf("Error\n");
		
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);

	return (0);
}
