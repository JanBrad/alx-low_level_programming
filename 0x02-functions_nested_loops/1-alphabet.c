#include "main.h"

/**
 * print_alphabet - Outputs lowercase alphabet
 *
 * Return: Always void
 */

void print_alphabet(void)
{

char alphBet[] = "abcdefghijklmnopqrstuvwxyz";

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
}
