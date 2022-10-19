#include "main.h"

/**
 *print_alphabet - check the code
 *
 *Return: Always void
 */

void print_alphabet(void)
{
char  print[26] = "abcdefghijklmnopqrstuvwxyz";

int x = 0;

while (x < 26)
{
_putchar(print[x]);
x++;
}
_putchar('\n');
}
