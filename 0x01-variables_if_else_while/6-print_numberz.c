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

for (num = 0; num < 10; num++)
{

putchar('0' + num);
}
putchar('\n');

return (0);
}
