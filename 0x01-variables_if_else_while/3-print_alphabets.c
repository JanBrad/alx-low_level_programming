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

while (x <= 'z')
{
putchar(x);

x++;
}

while (y <= 'Z')
{
putchar(y);

y++;
}

putchar('\n');
return (0);
}
