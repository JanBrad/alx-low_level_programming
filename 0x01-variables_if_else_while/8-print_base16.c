#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int num;
char alpha;

for (num = 0; num < 10; num++)
{

putchar('0' + num);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{

putchar(alpha);
}

putchar('\n');

return (0);
}
