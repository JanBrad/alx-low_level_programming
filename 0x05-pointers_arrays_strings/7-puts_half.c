#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: pointer to a string literal
 *
 * return: void
 */

void puts_half(char *str)
{

int x;
int y;
int k;

x = 0;

while (str[x] != '\0')
{
x++;
}
x--;

if (x % 2 == 0)
{

y = x / 2;
while (y <= x)
{

_putchar(str[y]);
y++;
}
}
else if (x % 2 == 1)
{

k = (x - 1) / 2;
while (k <= x)
{

_putchar(str[k]);
k++;
}
}
_putchar('\n');
}
