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
char x;

for (num = 0; num < 10; num++)
{
x = (char)num;
putchar(num);
}
putchar('\n');

return (0);
}
