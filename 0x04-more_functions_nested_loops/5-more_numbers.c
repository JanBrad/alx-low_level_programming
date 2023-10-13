#include "main.h"

/**
 * more_numbers - prints numberd from 1 to 14 exactly 10 times
 *
 * return: void
 */

void more_numbers(void)
{

char num[] = "01234567891011121314";

int x = 0;

while (x < 10)
{

int y = 0;

while(y < 20)
{
_putchar(num[y]);
y++;
}
_putchar('\n');
x++;
}
_putchar('\n');
}
