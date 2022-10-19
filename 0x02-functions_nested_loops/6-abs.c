#include "main.h"

/**
 *_abs - checks code
 *
 *@x: parameter value
 *
 *Result: absolute value of int
 */

int _abs(int x)
{

int y = x * (-2);

if (x < 0)
{

int n = x + y;

_putchar (n);
}

else if (x >= 0)
{
_putchar(x);
}
return (0);
}
