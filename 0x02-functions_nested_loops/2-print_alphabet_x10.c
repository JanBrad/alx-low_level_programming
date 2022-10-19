#include "main.h"

/**
 *print_alphabet_x10 - check the code
 *
 *Return: Always void
 */

void print_alphabet_x10(void)
{

char print[26] = "abcdefghijklmnopqrstuvwxyz";
int y = 0;

while (y <= 9)
{

int x = 0;

while (x < 26)
{
_putchar(print[x]);
x++;
}
_putchar('\n');
y++;
}
}
