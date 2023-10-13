#include "main.h"

/**
 * print_line - prints straight line in console
 *
 * return: Always '_' character
 */

void print_line(int n)
{

int x = 0;

while (x <= n)
{

if (n <= 0)
{
_putchar('\n');
}

else if ( n > 0)
{
_putchar('_');
}
x++;
}
_putchar('\n');
}
