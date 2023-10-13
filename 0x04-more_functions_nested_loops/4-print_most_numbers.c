#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * return: void
 */

void print_most_numbers(void)
{

char num[] = "0123456789";

int x = 0;

while (x < 10)
{

if ( x != 3 && x != 5)
{
_putchar(num[x]);
}
x++;
}
_putchar("\n");
}
