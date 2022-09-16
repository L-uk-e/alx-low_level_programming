#include "main.h"
#include "7-print_last_digit.c"
#include "_putchar.c"
#include "6-abs.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(-98);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
