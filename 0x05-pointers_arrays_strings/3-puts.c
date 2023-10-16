#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: pointer to a null-terminated string
 *
 * return: the string to stdout
 */

void _puts(char *str)
{

int x;

x = 0;

while (str[x] != '\0')
{
_putchar(str[x]);
}
_putchar('\n');
}
