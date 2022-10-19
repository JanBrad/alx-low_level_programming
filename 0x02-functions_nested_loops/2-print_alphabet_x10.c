#include "main.h"

/**
 *print_alphabet_10x - prints the alphabet 10x
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
_purchar('\n');
}
}
