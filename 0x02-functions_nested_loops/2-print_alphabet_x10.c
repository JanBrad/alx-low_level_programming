#include "main.h"

/**
 *print_alphabet_10x - prints
 *
 *Return: Always void
 */

void print_alphabet_x10(void)
{

int y = 0;

while (y <= 9)
{
char  print[26] = "abcdefghijklmnopqrstuvwxyz";

int x = 0;

while (x < 26)                                                                                                                                   
{
_putchar(print[x]);
x++;
}
}
_putchar('\n');
}
