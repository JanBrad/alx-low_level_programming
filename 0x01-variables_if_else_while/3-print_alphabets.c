#include <stdio.h>

/**
 *main - starting point
 *
 *Return: returns zero
 */

int main(void)
{
char x = 'a';
char y = 'A';

while (x <= 'a' && y <= 'A')
{
putchar(x);
putchar(y);
x++;
y++;
}
putchar('\n');
return (0);
}
