#include "main.h"

/**
 * main - Access point of program
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

char alphBet[] = "abcdefghijklmnopqrstuvwxyz";

int x = 0;

while (x <= 25)
{
_putchar(alphBet[x]);
x++;

while (x == 25)
{
_putchar('\n');
x++;
}
}
}
