#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print text using the write function.
 *
 * Return: Should return 1.
 */

int main(void)
{
	char line[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, line, 59);
	return (1);
}
