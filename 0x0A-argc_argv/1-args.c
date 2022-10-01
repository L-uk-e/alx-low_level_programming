#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * argc: Number of arguments
 * argv: Arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
