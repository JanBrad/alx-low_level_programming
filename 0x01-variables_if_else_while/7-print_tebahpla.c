#include <stdio.h>

/**
 *main - starting point
 *
 *Return: returns 0
 */

int main(void)
{

char x = 'z';

while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}
