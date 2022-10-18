#include "main.h"

/**
 *main - starting point
 *
 *Return: returns 0
 */

int main(void)
{
char print[9] = "_putchar";

int x = 0;

while (x <= 9)
{
_putchar(print[x]);
x++;
}
_putchar('\n');
return (0);
}
