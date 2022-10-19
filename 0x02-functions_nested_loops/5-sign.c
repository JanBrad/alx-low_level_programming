#include "main.h"

/**
 *print_sign - checks code 
 *
 *@n: parameter value
 *
 *Return: returns + if positive, - if negative & 0 if zero
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}

else if (n < 0)
{
_putchar('-');
return (-1);
}

else 
{
_putchar('0');
return (0);
}
}
