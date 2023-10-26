#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: integer to be multiplied with itself
 * @y: power  of x ( number of times x will multiply itself)
 *
 * return: the result of x raised to the power of y, or -1 in case of an error
 */

int _pow_recursion(int x, int y)
{

if (y == 0)
{

return (1);
}

if (y == 1)
{

return (x);
}

if (y < 0)
{

return (-1);
}

return (x * _pow_recursion(x, y - 1));


}
