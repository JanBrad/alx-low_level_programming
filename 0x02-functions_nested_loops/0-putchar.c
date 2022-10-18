#include "main.h"

/**
 *main - starting point
 *
 *Return: returns 0
 */

int main(void)
{
char print[8] = "_putchar";

int x = 0;

while (x < 8)
{
_putchar(print[x]);
x++;
}
_putchar('\n');
return (0);
}
