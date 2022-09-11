#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints out the size assigned to different data types
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int b;
	float f;

	printf("Size of a char: %ld %s\n", (long)sizeof(c), "byte(s)");

	printf("Size of an int: %ld %s\n", (long)sizeof(i), "byte(s)");

	printf("Size of a long int: %ld %s\n", (long)sizeof(l), "byte(s)");

	printf("Size of a long long int: %ld, %s\n", (long)sizeof(b), "byte(s)");

	printf("Size of a float: %ld, %s\n", (long)sizeof(f), "byte(s)");

	return (0);
}
