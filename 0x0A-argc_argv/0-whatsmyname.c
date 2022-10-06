#include <stdio.h>

/**
 * main - prints the name of its executable
 * @argc: number of arguments
 * @argv: array arguments
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
