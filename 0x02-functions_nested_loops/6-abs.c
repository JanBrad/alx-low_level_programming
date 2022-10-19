#include "main.h"

/**
 *_abs - checks code
 *
 *@int: parameter value
 *
 *Result: absolute value of int
 */

int _abs(int)
{

int x;

if  (x < 0)
{
int y = x * 2;
int x += y;

_putchar(x);
}

else if (x >= 0)
{
_putchar(x);
}
}
