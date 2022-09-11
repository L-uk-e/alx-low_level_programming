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

	printf("The size of a char: %lu %s. \n", (unsigned long)sizeof(c), "byte(s)");

	printf("The size of an int: %lu %s. \n", (unsigned long)sizeof(i), "byte(s)");

	printf("The size of a long int: %lu %s. \n", (unsigned long)sizeof(l), "byte(s)");

	printf("The size of a long long int: %lu, %s. \n", (unsigned long)sizeof(b), "byte(s)");

	printf("The size of a float: %lu, %s. \n", (unsigned long)sizeof(f), "byte(s)");

	return (0);
}
