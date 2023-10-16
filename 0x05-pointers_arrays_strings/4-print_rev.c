#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: pointer to a null-terminated string
 *
 * return: void
 */

void print_rev(char *s)
{

int y;

y = 0;

while (s[y] != '\0')
{
y++;
}
y += 1;

while (s[y] != '\0')
{
y++;
}

while (s[y] != s[0])
{
_putchar(s[y]);
y--;
}
_putchar('\n');
}
