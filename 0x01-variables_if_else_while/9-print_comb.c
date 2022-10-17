#include <stdio.h>

/**
 *main - starting point
 *
 *Return: returns 0
 */

int main(void)
{

int x = '0';

while (x < '9')
{
putchar(x);
putchar(',');
putchar(' ');
x++;
}
putchar('9');
return (0);
}
