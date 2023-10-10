#include "main.h"

/**
 * main - Access point of program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char myStr[] = "_putchar\n";

int x = 0;

while (x <= 9)
{
_putchar(myStr[x]);
x++;
}

return (0);
}
