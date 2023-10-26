#include "main.h"

/**
 * _sqrt_recursion - Finds the natural square root of an integer
 *
 * @n: Integer to find the square root of
 *
 * Returns: The square root of @n, or -1 i not a natural number
 */

int _sqrt_recursion(int n)
{

int x;

x = n;

if (n == 0)
{

return (0);
}


if (n < 0 || (int)n != n)
{

return (-1);
}

n = _sqrt_recursion(n - 1);

if (n * n == x)
{

return (n);
}

return (1);
}
