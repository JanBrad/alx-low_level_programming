#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: integer that program will find factorial for
 *
 * return: Integer factorial of the input integer, -1 if an error occurs.
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

return (n * factorial(n - 1));

}
