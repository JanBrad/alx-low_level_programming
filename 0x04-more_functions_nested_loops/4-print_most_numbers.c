#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * return: void
 */

void print_most_numbers(void)
{

char num[] = "0123456789";

int x;

for (x = 0; x < 10; x++)
{

if (x != 1 || x != 3)
{
_putchar(num[x]);
}
}
_putchar('\n');
}
