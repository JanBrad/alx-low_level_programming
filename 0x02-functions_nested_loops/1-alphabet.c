#include "main.h"

/**
 *main - check the code
 *
 *Return: Always 0
 */

void print_alphabet(void)
{
char  print[26] = "abcdefghijklmnopqrstuvwxyz";

int x = 0;

while (x < 27)
{
_putchar(print[x]);
x++;
}
_putchar('\n');
}
