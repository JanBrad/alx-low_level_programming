#include "main.h"

/**
 *main - check the code
 *
 *Return: Always 0
 */

int main(void)
{
char  print[26] = "abcdefghijklmnopqrstuvwxyz";

int x = 0;

while (x < 27)
{
print_alphabet(print[x]);
x++;
}
print_alphabet('\n');
return (0);
}
