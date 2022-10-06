#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0 if successful
 * 1 if Error
 */
int main(int argc, char *argv[])
{
	int coins = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(*(argv + 1));
	if (i < 0)
	{
		printf("0\n");
		return (1);
	}
	if (i >= 25)
	{
		coins += i / 25;
		i %= 25;
	}
	if (i >= 10)
	{
		coins += i / 10;
		i %= 10;
	}
	if (i >= 5)
	{
		coins += i / 5;
		i %= 5;
	}
	if (i >= 2)
	{
		coins += i / 2;
		i %= 2;
	}
	coins += i;
	printf("%d\n", coins);
	return (0);
}
