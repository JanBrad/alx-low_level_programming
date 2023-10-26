#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: integer that program will find factorial for
 *
 * Return: the factorial of @n, or -1 in case of an error.
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
