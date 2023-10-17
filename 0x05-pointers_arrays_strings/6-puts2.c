#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: pointer to a string literal
 *
 * return: void
 */

void puts2(char *str)
{

int x;

x = 0;

while (str[x] != '\0')
{

if (x == 0 || x % 2 == 0)
{
_putchar(str[x]);
x++;
}
}
}
