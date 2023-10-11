#include "main.h"

/**
 * print_alphabet_x10 - Outputs lowercase alphabet
 *
 * Return: Always void
 */

void print_alphabet_x10(void)
{

char alphBet[] = "abcdefghijklmnopqrstuvwxyz";

int y = 0;

while (y <= 9)
{
int x = 0;

while (x <= 26)
{
_putchar(alphBet[x]);
x++;

while (x == 26)
{
_putchar('\n');
x++;
}
}
y++;
}
}
