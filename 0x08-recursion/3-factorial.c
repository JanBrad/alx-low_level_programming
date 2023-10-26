#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: integer that program will find factorial for
 *
 * return: the factorial integer, or -1 to show an error
 */

int factorial(int n)
{

if (n == 0 || n == 1)
{

return (1);
}

if (n < 0)
{

return (-1);
}

return ( n * factorial(n - 1));

}
