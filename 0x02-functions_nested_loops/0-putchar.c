#include "main.h"

/**
 * main - Access point of program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char myStr[] = "_putchar";

int x = 0;

while (x <= 8)
{
_putchar(myStr[x]);
x++;
}

return (0);
}
