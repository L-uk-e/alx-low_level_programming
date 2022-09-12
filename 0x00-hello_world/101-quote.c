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
	char exact_text[] = "and that piece of art is useful\" - Dorakorpar, 2015-10-19,";

	write(1, exact_text, 59);
	return (1);
}
