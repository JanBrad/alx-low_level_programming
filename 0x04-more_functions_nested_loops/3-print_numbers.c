#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * return: void
 */

void print_numbers(void)
{

char num[] = "0123456789";

int x;

for (x = 0; x < 10; x++)
{

_putchar(num[x]);
}

_putchar('\n');
}
